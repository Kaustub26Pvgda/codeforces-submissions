#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    int n, k;
    cin >> n >> k; 

    vector<int> a(n);
    int ev = 0;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] % 2 == 0) ++ev;
    }

    int ans = INT_MAX;

    for(int i = 0; i < n; ++i){
        ans = min(ans, (k - a[i] % k) % k);
    }

    if(k == 4){
        if(ev >= 2) ans = 0;
        else if(ev == 1) ans = min(ans, 1);
        else ans = min(ans, 2);
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