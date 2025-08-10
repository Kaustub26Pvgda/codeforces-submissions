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
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    cout << max(0, a[2] + 1 - (a[0] + a[1])) << endl;
    return;
}

int main()
{
    fast_io();
    solve();
    return 0;
}