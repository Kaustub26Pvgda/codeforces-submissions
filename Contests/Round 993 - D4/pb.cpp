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
    string a, b{};
    cin >> a;
    
    for (char c : a)
    {
        if (c == 'p')
            b = 'q' + b;
        else if (c == 'q')
            b = 'p' + b;
        else
            b = 'w' + b;
    }
    cout << b << endl;
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