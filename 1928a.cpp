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
    int a, b;
    cin >> a >> b;

    if ((a % 2) && (b % 2))
    {
        cout << "NO" << endl;
        return;
    }
    if ((a % 2 || b % 2) && (a == b * 2 || b == a * 2))
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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