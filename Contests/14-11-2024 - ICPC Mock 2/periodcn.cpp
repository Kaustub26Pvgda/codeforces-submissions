#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    int l, r;
    cin >> t;
    while (t--)
    {
        int res{};
        cin >> l >> r;
        int digitsL = ceil(log(l) / log(2)) + 1;
        int digitsR = ceil(log(r) / log(2)) + 1;

        for (int i{digitsL}; i < digitsR; i++)
        {
            // for each i, no. of factors
            for (int j = 1; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                    if (i / j == j)
                        res++;
                    else
                        res += 2;
            }
        }
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                if (i / j == j)
                    res++;
                else
                    res += 2;
        }
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                if (i / j == j)
                    res++;
                else
                    res += 2;
        }

        cout << res << endl;
    }
    return 0;
}