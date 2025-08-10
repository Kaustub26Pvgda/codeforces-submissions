#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    string p, s;
    cin >> p >> s;
    vector<int> vp, vs;
    int start = 0;
    for (int i = 1; i < p.size(); i++) {
        if (p[i] != p[i - 1]) {
            vp.push_back(i - start);
            start = i;
        }
    }
    start = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            vs.push_back(i - start);
            start = i;
        }
    }
    if (vp.size() != vs.size()) {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < vp.size(); i++) {
        if (!(vs[i] >= vp[i] && vs[i] <= (2 * vp[i]))) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}