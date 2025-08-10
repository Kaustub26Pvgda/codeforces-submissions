#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int one{}, two{};
    while (t--)
    {
        cin >> one >> two;
        int screens{};
        screens += two / 2;
        int remaining = screens * 7 + (two % 2) * 11;

        if (remaining >= one)
            cout << screens + (two % 2) << endl;
        else
        {
            one -= remaining;
            cout << screens + (two % 2) + ((one + 14) / 15) << endl;
        }
    }

    return 0;
}