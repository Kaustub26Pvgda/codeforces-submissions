#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, x;
    while (t--)
    {
        cin >> n >> x;
        if (n == 1 || n == 2)
            cout << "1\n";
        else
            cout << (ceil(float(n - 2) / x)) + 1 << "\n";
    }

    return 0;
}