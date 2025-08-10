#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    ll n, temp;
    while (t--)
    {
        if (sum % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        int target = sum / n;
        for (int i{}; i < n; i++)
        {
            int diff = a[i] - target;
            if (i % 2 == 0)
                x += diff;
            else
                y += diff;
        }

        cout << ans << endl;
    }
}