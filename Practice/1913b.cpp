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
    string s;
    cin >> s;
    int n = s.size();

    int cnt0 = 0, cnt1 = 0;
    for (char c : s) {
        if (c == '0') cnt0++;
        else cnt1++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (cnt1 > 0) {
                cnt1--;   // match 0 with 1
            } else {
                ans = n - i;
                break;
            }
        } else { // s[i] == '1'
            if (cnt0 > 0) {
                cnt0--;   // match 1 with 0
            } else {
                ans = n - i;
                break;
            }
        }
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