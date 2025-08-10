#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ctr{};
        int a, b;
        cin >> a >> b;
        if (a % b == 0)
            cout << 0 << endl;
        else
            cout << (b - (a % b)) << endl;
    }

    return 0;
}