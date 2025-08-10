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
    int k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    int ans{};

    unordered_set<int> set;
    int t = 1;
    int max_no = r2 / l1;
    while (pow(k, t) <= max_no)
        set.insert(pow(k, t++));

    int val;
    for (auto k_val : set)
    {
        for (int i{l1}; i <= r1; i++)
        {
            val = k_val * i;
            if (val >= l2 && val <= r2)
                ans++;
        }
    }

    cout << ans << endl;
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}