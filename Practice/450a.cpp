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

    int ans = 1;
    int maxR = 0;

    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        
        int rounds = (temp + m - 1) / m;    // same as ceil(temp / m)
        if (rounds >= maxR) {
            maxR = rounds;
            ans = i;
        }        
    }

    cout << ans << "\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}