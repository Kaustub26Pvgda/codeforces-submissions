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
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    int i = 0;
    while (i <= n - k) {
        bool good = true;
        for (int j = i; j < i + k; j++) {
            if (a[j] == 1) {
                good = false;
                break;
            }
        }
        if (good) {
            ans++;
            i += k + 1;
        }
        else i++;
    }
    cout << ans << "\n";
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