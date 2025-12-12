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
    int n, t;
    cin >> n >> t;   

    if (n == 1 && t == 10) 
        cout << "-1\n";
    else if (n >= 2 && t == 10) {
        for (int i = 1; i < n; i++)
            cout << "1";
        cout << "0\n";
    }
    else {
        cout << t;
        for (int i = 1; i <= n - 1; i++)
            cout << "0";
    }
}

int main()
{
    fast_io();
    solve();
    return 0;
}