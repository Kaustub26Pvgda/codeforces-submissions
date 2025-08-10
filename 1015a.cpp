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

    int l, r, ans{};
    bitset<101> b;
    b.set();
    while (n--)
    {
        cin >> l >> r;
        for (int i{l}; i <= r; i++)
            b[i] = 0;
    }
    ans = b.count() - (101 - m);
    if (ans == 0)
        cout << "0\n";
    else
    {
        cout << ans << "\n";
        for (int i{1}; i <= m; i++)
            if (b[i])
                cout << i << " ";
        cout << "\n";
    }
}

int main()
{
    fast_io();
    solve();
    return 0;
}