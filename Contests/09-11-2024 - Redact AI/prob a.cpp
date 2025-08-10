#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t{};
    cin >> t;
    ll l, r, k;
    while (t--)
    {
        cin >> l >> r >> k;
        cout << ((r / k - l + 1) > 0 ? (r / k - l + 1) : 0) << '\n';
    }
}