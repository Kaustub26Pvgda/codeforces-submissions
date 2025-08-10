#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    ll n, temp;
    while (t--)
    {
        cin >> n;
        ll copy = n;
        ll oddSum{}, evenSum{};
        while (n--)
        {
            cin >> temp;
            oddSum += temp;
            if (n)
            {
                cin >> temp;
                evenSum += temp;
                n--;
            }
        }
        n = copy;
        ll oddAvg = oddSum / ((n + 1) / 2), evennum = evenSum / (n / 2);
        if ((oddAvg == evennum) && (oddSum % ((n + 1) / 2) == 0) && ((evenSum % (n / 2)) == 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}