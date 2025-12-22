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
    int n, m;
    cin >> n >> m;
    map<string, string> ans;
    string a, b;

    while (m--) {
        cin >> a >> b;
        ans[a] = (b.size() < a.size() ? b : a);
    }
    while (n--) {
        cin >> a;
        cout << ans[a] << " ";
    }
}

int main()
{
    fast_io();
    solve();
    return 0;
}