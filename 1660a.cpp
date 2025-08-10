#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int oneB{}, twoB{};
    while (t--)
    {
        cin >> oneB >> twoB;
        int res = (oneB == 0) ? 1 : (oneB + 2 * twoB) + 1;
        cout << res << endl;
    }

    return 0;
}