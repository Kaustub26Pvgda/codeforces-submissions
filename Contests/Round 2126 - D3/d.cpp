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
    vector<array<int, 3>> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    // 0 - l, 1 - r, 2 - real
    
    sort(a.begin(), a.end(), [](const array<int, 3>& a, const array<int, 3>& b) {
        if (a[2] != b[2]) return a[2] < b[2];
        else return a[0] < b[0];
    });

    for (int i = 0; i < n; i++) {
        if (k >= a[i][0])
            k = a[i][2];
        else break;
    }
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