#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    ll A, B;
    cin >> A >> B;
    
    if (B == 1) cout << "NO\n";
    else {
        cout << "YES\n";
        ll sum = (A * B * 2);
        ll y = sum - A;
        cout << A << " " << y << " " << sum << "\n";
    }
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