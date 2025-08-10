#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    int a, b, x, y;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x >> y;
        if (a == b)
        {
            cout << "no" << endl;
            continue;
        }
        if (
            (y + ((a * double(b)) / (a - double(b))) <= a) ||
            ((y + double(b)) - ((a * double(b)) / (a - double(b))) >= 0) ||
            (x + ((a * double(b)) / (a - double(b))) <= a) ||
            ((x + double(b)) - ((a * double(b)) / (a - double(b))) >= 0))
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}