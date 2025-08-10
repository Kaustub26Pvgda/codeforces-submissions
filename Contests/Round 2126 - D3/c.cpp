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
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    int you = h[k - 1];
    sort(begin(h), end(h));
    int start = 0;
    while (h[start] != you) start++;
    int water = 1;
    // now we start at 'start', water is at 1

    bool poss = true;
    for (int i = start; i < n - 1; i++) {
        if ((h[i] - water + 1) < (h[i + 1] - h[i])) {
            poss = false;
            break;
        }
        else water += (h[i + 1] - h[i]);
    }

    cout << (poss ? "YES\n" : "NO\n");
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