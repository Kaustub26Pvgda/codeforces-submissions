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
    int n, k;
    cin >> n >> k;
    int ans;

    if (n % k == 0) cout << "1\n";
    else if (k % n == 0) cout << (k / n) << "\n";
    else if (n > k) cout << "2\n";
    else cout << (k / n) + 1 << "\n";
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