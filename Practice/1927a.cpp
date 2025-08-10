#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t, n, ans{};
    cin >> t;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        if (n == 1)
            cout << 1 << endl;
        else if (s[0] == 'B' && s[n - 1] == 'B')
            cout << n << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'B')
                {
                    ans = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'B')
                {
                    ans = i - ans + 1;
                    break;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}