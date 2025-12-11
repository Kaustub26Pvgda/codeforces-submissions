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

    int bal = 0;
    int unmatched_close = 0;
    for (auto c : s) {
        if (c == '(') bal++;
        else {  // when c is ')'
            if (bal > 0) bal--;
            else unmatched_close++;
        }
    }

    cout << unmatched_close << "\n";
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