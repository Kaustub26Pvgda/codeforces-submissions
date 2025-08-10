#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    string s, ans;
    while (t--)
    {
        cin >> s;
        int n = s.length();
        for (int i = n - 1; i >= 0; i--)
            s = s + s[i];
        cout << s << endl;
    }

    return 0;
}