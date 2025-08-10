#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, m;
    while (t--)
    {
        int ans{};
        cin >> n >> m;
        string s[n];
        for (int i{}; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i{}; i < n; i++)
        {
            if (m == 0)
                break;
            m -= s[i].length();
            if (m < 0)
                break;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}