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

    vector<int> r(26, 0);
    for (char c : s) r[c - 'a']++;
    vector<int> l(26, 0);

    int rDistinct = 0;
    for (int x : r) if (x > 0) rDistinct++;
    int lDistinct = 0, ans = 0;

    for (int i = 0; i < n - 1; i++) {
        int c = s[i] - 'a';

        if (l[c] == 0) lDistinct++;
        l[c]++;
        r[c]--;
        if (r[c] == 0) rDistinct--;

        ans = max(ans, lDistinct + rDistinct);
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