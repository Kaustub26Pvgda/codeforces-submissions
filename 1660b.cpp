#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n;
    int temp{};
    while (t--)
    {
        cin >> n;
        int max{}, smax{};
        for (int i{}; i < n; i++)
        {
            cin >> temp;
            if (temp > max)
            {
                smax = max;
                max = temp;
            }
            else if (temp > smax)
                smax = temp;
        }
        if (abs(smax - max) >= 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}