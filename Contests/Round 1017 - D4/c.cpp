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
    int n;
    cin >> n;
    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
        }
    }
    vector<int> ans;
    bitset<1700> s;
    for (auto i : g[0]) {
        ans.push_back(i);
        s[i] = 1;
    }
    for (int i = 1; i < n; i++) {
        ans.push_back(g[i][n - 1]);
        s[g[i][n - 1]] = 1;
    }
    for (int i = 1; i <= 2 * n; i++) {
        if (s[i] == 0) {
            ans.insert(ans.begin(), i);
            break;
        }
    }
    for (auto i : ans) 
        cout << i << " ";
    cout << "\n";
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