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
    int s, n, check = 1;
    cin >> s >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        if (s <= a[i].first) {
            check = 0;
            break;
        }
        s += a[i].second;
    }

    cout << (check == 0 ? "NO\n" : "YES\n");
}

int main()
{
    fast_io();
    solve();
    return 0;
}