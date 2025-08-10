#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ((n & 3) == 0)
        {
            cout << "YES" << endl;
            for (int i{2}; i <= n; i += 2)
                cout << i << " ";
            for (int i{1}; i <= n - 2; i += 2)
                cout << i << " ";
            cout << ((n - 1) + (n / 2)) << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}