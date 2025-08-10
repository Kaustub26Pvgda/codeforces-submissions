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
    string n;
    cin >> n;
    int ans = 0;
    int zeroC = 0, flag = 1;
    for (int i = n.length() - 1; i >= 0; i--) {
        if (flag && n[i] == '0') {
            zeroC++;
        }
        else flag = 0;
    }
    ans += zeroC;
    zeroC = 0;
    for (int i = 0; i < n.length(); i++) {
        zeroC += (n[i] == '0');
    }
    zeroC -= ans;
    ans += (n.length() - ans - zeroC - 1);
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