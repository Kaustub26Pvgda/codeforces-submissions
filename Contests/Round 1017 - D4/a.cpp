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
    std::string a, b, c;
    std::cin >> a >> b >> c;

    std::string modern_name;
    modern_name += a[0];
    modern_name += b[0];
    modern_name += c[0];

    std::cout << modern_name << std::endl;
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