#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    string s = "codeforces";
    while (t--)
    {
        char c;
        cin >> c;
        if (s.find(c) != s.npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}