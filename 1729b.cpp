#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int q;
    cin >> q;
    int n;
    string t, ans{};
    while (q--)
    {
        ans = "";
        cin >> n;
        cin >> t;
        int no;
        for (int i{n - 1}; i >= 0; i--)
        {
            if (t[i] == '0')
            {
                no = 10 * (t[i - 2] - '0') + (t[i - 1] - '0');
                ans = char('a' + no - 1) + ans;
                i -= 2;
            }
            else
            {
                no = t[i] - '0';
                ans = char('a' + no - 1) + ans;
            }
        }
        cout << ans << endl;
    }

    return 0;
}