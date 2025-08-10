#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, x, y;
    while (t--)
    {
        int res{};
        cin >> n;
        while (n--)
        {
            cin >> x >> y;
            res += (x > y) ? 1 : 0;
        }
        cout << res << endl;
    }

    return 0;
}