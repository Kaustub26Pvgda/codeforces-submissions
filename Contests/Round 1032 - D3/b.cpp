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
    string s;
    cin >> s;
    unordered_set<char> hs;
    hs.insert(s[0]);
    hs.insert(s.back());

    for (int i = 1; i < n - 1; i++) {
        if (hs.find(s[i]) != hs.end()) {
            cout << "Yes\n";
            return;
        }
        hs.insert(s[i]);
    }
    cout << "No\n";
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