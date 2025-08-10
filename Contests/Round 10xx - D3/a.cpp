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
    int n, x;
    cin >> n >> x;
    vector<int> doors;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        doors.push_back(temp);
    }
    int f1 = -1, l1 = -1;
    for (int i = 0; i < n; i++) {
        if (doors[i] == 1) {
            f1 = i;
            break;
        }
    }
    if (f1 == -1) {
        cout << "YES\n";
        return;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (doors[i] == 1) {
            l1 = i;
            break;
        }
    }
    if (((l1 - f1) + 1) > x)
        cout << "NO\n";
    else cout << "YES\n";
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