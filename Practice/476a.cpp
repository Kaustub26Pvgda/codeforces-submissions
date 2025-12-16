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
    int n, m;
    cin >> n >> m;

    int ans;
    if (n < m) ans = -1;
    else {
        // find minimum moves (w/o multiple consideration), then increase till we can find a multiple
        ans = (n + 1) / 2;
        while (ans % m != 0) ans++;
    }

    cout << ans << "\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}