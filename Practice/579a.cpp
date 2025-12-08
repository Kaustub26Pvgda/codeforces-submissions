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
    int x;
    cin >> x;
    cout << __builtin_popcount(x) << "\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}