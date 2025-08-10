#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    int a, b, ops;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ops = 0;
        if (a == b)
            cout << 0 << endl;
        else if (a < b)
        {
            if ((abs(a - b) & 1) == 1)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else if (a > b)
        {
            if ((abs(a - b) & 1) == 1)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
    }

    return 0;
}