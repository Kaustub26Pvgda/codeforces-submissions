#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int x, y;
    while (t--)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
            cout << 0 << endl;
        else
        {
            int d = x * x + y * y;
            int root = int(sqrt(d));
            if (root * root == d)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}