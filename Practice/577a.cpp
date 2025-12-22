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
    int n, x;
    cin >> n >> x;
    int ans = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            int j = x / i;
            // so now i and j are divisors of x
            if (i <= n && j <= n) {
                ans += (i == j) ? 1 : 2;
            }
        }
    }

    cout << ans << "\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}