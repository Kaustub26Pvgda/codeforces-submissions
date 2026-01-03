#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int f(int x, int y) {return (x > y) - (x < y);}

void solve()
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int res = 2 * (f(a1, b1) + f(a2, b2) > 0) + 2 * (f(a1, b2) + f(a2, b1) > 0);
    cout << res << "\n";
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