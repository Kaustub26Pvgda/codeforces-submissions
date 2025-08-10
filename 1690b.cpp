#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, temp;
    while (t--)
    {
        cin >> n;
        int flag{1}, diff{};
        int a[n], b[n];
        for (int i{}; i < n; i++)
            cin >> a[i];
        for (int i{}; i < n; i++)
        {
            cin >> b[i];
            diff = max(diff, a[i] - b[i]);
        }

        for (int i{}; i < n; i++)
        {
            if (a[i] - b[i] < diff && b[i] != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}