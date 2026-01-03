#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool comp(pair<long, long> a, pair<long, long> b) {
    // if both have same x % k, smaller index first
    if (a.first == b.first) return a.second < b.second;
    else if (a.first == 0) return true;
    else if (b.first == 0) return false;
    // if both have non-zero x % k, earlier index first
    else return a.first > b.first;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<long, long>> a(n);
    for(long i = 0; i < n; i++) {
        long temp;
        cin >> temp;
        // store (remainder, index) pairs using STL function make_pair()
        a[i] = make_pair(temp % k, i + 1);
    }

    // use comparator to sort
    sort(begin(a), end(a), comp);

    for (long i = 0; i < n; i++) cout << a[i].second << " ";
    cout << "\n";
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