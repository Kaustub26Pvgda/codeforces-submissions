#include <iostream>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    string s;
    cin >> s;
    s.pop_back();
    s.pop_back();
    s = s + "i";
    cout << s << "\n";
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