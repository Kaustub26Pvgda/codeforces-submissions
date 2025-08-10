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
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if ((a1 + a2 + a3 + a4) & 1 == 1)
        cout << "NO\n";
    else
    {
        if ((a1 + a2) == (a3 + a4) || (a1 + a3) == (a2 + a4) || (a1 + a4) == (a2 + a3) || (a1 + a2 + a3) == a4 || (a1 + a2 + a4) == a3 || (a1 + a4 + a3) == a2 || (a4 + a2 + a3) == a1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    fast_io();
    solve();
    return 0;
}