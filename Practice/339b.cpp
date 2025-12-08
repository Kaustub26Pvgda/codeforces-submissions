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

    int loc = 1;
    long long int ans = 0;
    for (int i = 0; i < m; i++) {
        int cur;
        cin >> cur;

        if (cur >= loc) ans += (cur - loc);
        else ans += n + (cur - loc);
        loc = cur;
    }
    cout << ans << "\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}