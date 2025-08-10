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
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    if (n == 1)
        cout << abs(a[0] - s) << "\n";
    else if (s <= a[0])
        cout << (a.back() - s) << "\n";
    else if (s >= a.back())
        cout << (s - a[0]) << "\n";
    else 
        if (abs(s - a.back()) <= abs(s - a[0]))
            cout << ((a.back() - s) + abs(a.back() - a[0])) << "\n";
        else 
            cout << ((s - a[0]) + abs(a.back() - a[0])) << "\n";
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