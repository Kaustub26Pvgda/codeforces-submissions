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
    int k;
    cin >> k;
    if (k & 1)
        cout << "YES\n";
    else 
        cout << "NO\n";
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