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
    string a, b;
    int ag = 0, bg = 0;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;

        if (i == 0) {
            a = x;
            ag++;
        }
        else if (x == a) ag++;
        else {
            // b = x;
            bg++;
        }
    }

    cout << (ag > bg ? a : b) << "\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}