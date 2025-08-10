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
    int a[n];
    for (int i{}; i < n; i++)
        cin >> a[i];
    for (int i{n - 1}; i >= 0; i--)
        cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}