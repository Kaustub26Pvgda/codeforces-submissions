#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, temp{};
    while (t--)
    {
        int ans{1};
        cin >> n;
        int a[n]{};
        for (int i{}; i < n; i++)
        {
            cin >> temp;
            a[temp - 1]++;
            ans = max(ans, a[temp - 1]);
        }
        cout << ans << endl;
    }

    return 0;
}