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
    int n, ans{};
    cin >> n;
    pair<int, int> p[n];
    for (int i{}; i < n; i++)
        cin >> p[i].first >> p[i].second;
    sort(p, p + n);
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