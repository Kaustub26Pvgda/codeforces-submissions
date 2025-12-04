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
    string ref = "hello";

    int i = 0;
    for (char c : s) {
        if (c == ref[i]) i++;
    }
    if (i != 5) cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}