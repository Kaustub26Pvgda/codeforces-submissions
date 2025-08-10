#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int x = n % 3;
        int y = n / 3;
        if (x == 0)
            cout << y << " " << y + 1 << " " << y - 1 << endl;
        else if (x == 1)
            cout << y << " " << y + 2 << " " << y - 1 << endl;
        else
            cout << y + 1 << " " << y + 2 << " " << y - 1 << endl;
    }

    return 0;
}