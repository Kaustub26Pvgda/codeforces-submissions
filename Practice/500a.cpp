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
    int n, t;
    cin >> n >> t;
    
    vector<int> a(n + 1);
    for (int i = 1; i < n; ++i)
        cin >> a[i];

    int pos = 1;
    while (pos < t) {
        if (pos > n - 1) break;
        pos += a[pos];
    }
    
    cout << (pos == t ? "YES\n" : "NO\n");
}

int main()
{
    fast_io();
    solve();
    return 0;
}