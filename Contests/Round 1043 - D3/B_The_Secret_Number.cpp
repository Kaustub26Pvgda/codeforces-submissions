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
    long long n;
    cin >> n;

    vector<long long> res;
    long long base = 10;
    while ((n / (base + 1)) > 0) {
        long long temp = n / (base + 1);
        if (temp * (base + 1) == n)
        res.push_back(temp);
        base *= 10;
    }
    sort(begin(res), end(res));
    if (res.size() == 0) cout << "0\n";
    else {
        cout << res.size() << "\n";
        for (long long num : res) cout << num << " ";
        cout << "\n";
    }
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