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
    long long n;
    cin >> n;
    long long coins = 0;

    vector<long long> pow3(40, 1);
    for (int i = 1; i < 40; i++) pow3[i] = pow3[i-1] * 3;

    int i = 0;
    while (n > 0) {
        int ai = n % 3;
        n /= 3;
        if (ai > 0) {
            coins += ai * pow3[i+1];   
            if (i > 0) coins += ai * i * pow3[i-1];
        }
        i++;
    }
    cout << coins << "\n";
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