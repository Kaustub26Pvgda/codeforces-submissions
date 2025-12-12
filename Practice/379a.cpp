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
    int ans = a;

    while (a >= b) {
        a = a - b + 1;  // burn b candles and create 1 more
        ans++;
    }

    cout << ans << "\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}