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
    long long x, y, z, paired;
    cin >> x >> y;
    long long a, b;
    cin >> a >> b;

    long long ans1 = 0, ans2 = 0;
    ans1 = (x + y) * a;         // do all a operations (case 1)

    paired = min(x, y);         // no. of b operations
    z = abs(x - y);             // no. of a operations
    ans2 = paired * b + z * a;  // do as many b, then a (case 2)

    cout << min(ans1, ans2) << "\n";
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