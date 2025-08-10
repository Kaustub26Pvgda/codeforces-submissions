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
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    if (r >= m) {
        cout << 0 << " " << m << "\n";
        return;
    }
    int rem = r - m;
    cout << rem << " " << r << "\n";
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