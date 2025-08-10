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
    string x;
    cin >> x;
    char ans = '9';
    for (char c : x) {
        if (c < ans)
            ans = c;
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