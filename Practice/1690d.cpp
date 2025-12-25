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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> prefix(n + 1);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + (s[i - 1] == 'W');
        // prefix[i] = how many Ws from 0 to (i - 1)
    }

    int ans = INT_MAX;
    // check each window by looping over prefix array and checking i and (i - k)
    for (int i = k; i <= n; i++) {
        int cur = prefix[i] - prefix[i - k];
        ans = min(ans, cur);
    }
    
    cout << ans << "\n";
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