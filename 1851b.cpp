#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n;
    string ans;
    while (t--)
    {
        cin >> n;
        int a[n], sorta[n];
        ans = "YES";
        for (int i{}; i < n; i++)
        {
            cin >> a[i];
            sorta[i] = a[i];
        }
        sort(sorta, sorta + n);
        for (int i{}; i < n; i++)
        {
            if ((a[i] + sorta[i]) % 2 != 0)
            {
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}