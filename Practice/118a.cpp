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
    string s, ans = "";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (!(s[i] == 'A' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I' || s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')) {
            ans += '.';
            if (s[i] >= 'A' && s[i] <= 'Z')
                ans += tolower(s[i]);
            else ans += s[i];
        } 
    }
    cout << ans << "\n";
}

int main()
{
    fast_io();
    solve();
    return 0;
}