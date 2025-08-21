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
    string a, b, c;
    cin >> n;
    cin >> a;
    cin >> m;
    cin >> b;
    cin >> c;

    for (int i = 0; i < m; i++) {
        if (c[i] == 'D') 
            a = a + b[i];
        else 
            a = b[i] + a;
    }

    cout << a << "\n";
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