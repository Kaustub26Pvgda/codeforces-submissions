#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> getTunedSensors(vector<int> sensors, int k) {
    int n = (int)sensors.size();
    vector<vector<int>> result;
    if (k <= 0 || k > n) return result;

    unordered_map<int,int> freq;
    map<int, set<int>> groups;
    int maxFreq = 0;

    auto addVal = [&](int v) {
        int old = freq[v];
        if (old > 0) {
            auto it = groups.find(old);
            if (it != groups.end()) {
                it->second.erase(v);
                if (it->second.empty()) groups.erase(it);
            }
        }
        int now = ++freq[v];
        groups[now].insert(v);
        if (now > maxFreq) maxFreq = now;
    };

    auto removeVal = [&](int v) {
        auto itf = freq.find(v);
        if (itf == freq.end()) return;
        int old = itf->second;
        // remove from old group
        auto it = groups.find(old);
        if (it != groups.end()) {
            it->second.erase(v);
            if (it->second.empty()) groups.erase(it);
        }
        if (old == 1) {
            // freq becomes 0
            freq.erase(itf);
        } else {
            int now = old - 1;
            freq[v] = now;
            groups[now].insert(v);
        }
        while (maxFreq > 0 && groups.find(maxFreq) == groups.end()) --maxFreq;
    };

    for (int i = 0; i < k; ++i) addVal(sensors[i]);

    for (int i = 0; i <= n - k; ++i) {
        int optimal = *groups[maxFreq].begin();
        int changes = k - maxFreq;
        result.push_back({changes, optimal});

        if (i + k < n) {
            removeVal(sensors[i]);
            addVal(sensors[i + k]);
        }
    }

    return result;
}