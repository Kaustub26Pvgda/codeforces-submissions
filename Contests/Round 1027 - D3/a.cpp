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
    int s;
    cin >> s;
    if (s == 0) {
        cout << "0 0\n";
        return;
    }
    int root = sqrt(s);
    if (((root * root) == s) || ((root + 1) * (root + 1) == s))
        cout << 1 << " " << (root - 1) << "\n";
    else 
        cout << -1 << "\n";
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