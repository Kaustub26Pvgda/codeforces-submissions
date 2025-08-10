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
    int n;
    cin >> n;
    vector<int> a(n);

    for (int& x : a) cin >> x;
    int max_sum = 0;

    for (int k = 0; k < n; ++k) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += (a[k] ^ a[i]);
        }
        max_sum = max(max_sum, sum);
    }
    cout << max_sum << "\n";
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