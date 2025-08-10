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
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int allotted = min(m, a) + // -> no of monkeys that can be sat in first row
                   min(m, b);  // -> no of monkeys that can be sat in second row
    int rem = 2 * m - allotted;
    allotted += min(rem, c);
    cout << allotted << endl;
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