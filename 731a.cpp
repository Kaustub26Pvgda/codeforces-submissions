#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    char curr = 'a';
    for (char c : s)
    {
        ans += min(abs(c - curr), 26 - (abs(c - curr)));
        curr = c;
    }
    cout << ans;

    return 0;
}