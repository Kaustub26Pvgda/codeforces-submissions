#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool checkPrime(int n) { 
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i+= 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void solve()
{
    int x, k;
    cin >> x >> k;
    if (x == 1 && k == 2)
        cout << "YES\n";
    else if (k == 1 && (x == 2 || x == 3 || checkPrime(x)))
        cout << "YES\n";
    else 
        cout << "NO\n";
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