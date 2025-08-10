#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, temp;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &temp : a)
            cin >> temp;
        sort(a.begin(), a.end());
        ll ans = max(a[0] * a[1], a[n - 1] * a[n - 2]);
        cout << ans << endl;
    }

    return 0;
}