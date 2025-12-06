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
    string s;
    cin >> s;
    
    if (s.size() == 1 && s[0] >= 'a' && s[0] <= 'z') {
        cout << char(toupper(s[0])) << "\n";
        return;
    }
    else {      // if string is longer than 1 character
        int check = 1;
        for (int i = 1; i < s.size(); i++) 
            if (!(s[i] >= 'A' && s[i] <= 'Z'))
                check = 0;      // no need to changae
        
        if (check) {
            string ans = "";
            for (int i = 0; i < s.size(); i++) {
                if (s[i] >= 'a' && s[0] <= 'z')
                    ans += toupper(s[i]);
                else ans += tolower(s[i]);
            }
            cout << ans << "\n";
            return;
        }
        else cout << s << "\n"; 
    }
}

int main()
{
    fast_io();
    solve();
    return 0;
}