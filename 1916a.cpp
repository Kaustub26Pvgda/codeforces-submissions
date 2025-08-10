#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        ll prod{1};
        int temp;
        for (int i{}; i < n; i++)
        {
            cin >> temp;
            prod *= temp;
        }
        if (prod >= INT_MAX)
        {
            cout << "NO" << endl;
            continue;
        }
        if (2023 % prod == 0)
        {
            cout << "YES" << endl;
            cout << (2023 / prod) << " ";
            for (int i{}; i < k - 1; i++)
                cout << 1 << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}