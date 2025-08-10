#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    ll n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        int b[n]{};
        for (int i{}; i < n; i++)
            cin >> arr[i];

        ll res = -1;
        ll count{};
        for (int i{}; i < n; i++)
        {
            if ((arr[i] & k) == k)
            {
                count++;
                b[i] = 1;
                if (res == -1)
                    res = arr[i];
                else
                    res &= arr[i];
            }
        }
        if (res == k)
        {
            cout << "YES\n"
                 << count << endl;
            for (int i{}; i < n; i++)
            {
                if (b[i] == 1)
                    cout << (i + 1) << " ";
            }
            cout << endl;
        }
        else
            cout << "NO\n";
    }

    return 0;
}