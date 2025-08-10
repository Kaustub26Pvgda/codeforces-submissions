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
    if (s.length() == 1)
        cout << 1 << "\n";
    else 
    {
        for(int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << 1 << "\n";
                return;
            }
        }
        cout << s.length() << "\n";
    }
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