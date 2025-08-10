#include <iostream>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    int n, m; // = 1
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    
    
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}