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
    int ans = 0;
    vector<int> a;
    for (int i = 0 ; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    if (a.size() == 1) {
        cout << 1 << "\n";
        return;
    }

    int i = n - 2;
    int cIdx = n - 1;
    ans++;
    while (i >= 0) {
        if (1 + a[i] < a[cIdx]) {
            ans++;
            cIdx = i;
        }
        i--;
    }
    cout << ans << "\n";
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