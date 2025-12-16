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
    unordered_map<int, int> m = {
        {0, 6},
        {1, 8},
        {2, 4},
        {3, 2}
    };
    int n;
    cin >> n;
    if (n == 0) cout << "1\n";
    else        cout << m[n % 4] << "\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}