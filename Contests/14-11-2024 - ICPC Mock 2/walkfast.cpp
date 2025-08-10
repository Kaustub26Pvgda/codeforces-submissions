#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, a, b, c, d, p, q, y;
    while (t--)
    {
        int walk, train;
        cin >> n >> a >> b >> c >> d >> p >> q >> y;
        int arr[n];
        for (int i{0}; i < n; ++i)
        {
            cin >> arr[i];
        }
        a = arr[a - 1];
        b = arr[b - 1];
        c = arr[c - 1];
        d = arr[d - 1];

        walk = abs(a - b) * p;
        if (walk <= y)
        {
            cout << walk << endl;
            continue;
        }
        else if (abs(a - c) * p <= y)
        {
            train = abs(c - d) * q + y + abs(b - d) * p;
            cout << min(walk, train) << endl;
        }
        else
            cout << walk << endl;
    }

    return 0;
}