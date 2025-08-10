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
    int l, r, count{};
    cin >> l >> r;
    int power = log2(r);
    power = pow(2, power);
    while (power)
    {
        power = power >> 1;
        count++;
    }
    cout << count - 1 << "\n";
    return;
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}