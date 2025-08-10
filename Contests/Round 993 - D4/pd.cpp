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
    int b[n], temp, bp = 1;
    unordered_set<int> set;
    cin >> b[0];
    set.insert(b[0]);
    for (int i{1}; i < n; i++)
    {
        cin >> temp;
        if (temp != b[bp - 1] && !set.contains(temp))
        {
            b[bp++] = temp;
            set.insert(temp);
        }
    }
    for (int i{}; i < bp; i++)
    {
        cout << b[i] << " ";
    }
    for (int i{1}; i <= n; i++)
        if (!set.contains(i))
            cout << i << " ";
    cout << "\n";
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