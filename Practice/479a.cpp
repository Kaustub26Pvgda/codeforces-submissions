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
    int a, b, c;
    cin >> a >> b >> c;

    int r1 = a + b + c;
    int r2 = a * b * c;
    int r3 = (a + b) * c;
    int r4 = a * (b + c);
    cout << max(max(r1, r2), max(r3, r4)) << "\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}