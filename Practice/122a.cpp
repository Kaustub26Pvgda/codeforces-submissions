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
    int n;
    cin >> n;

    vector<int> lucky = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int l : lucky) {
        if (n % l == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}