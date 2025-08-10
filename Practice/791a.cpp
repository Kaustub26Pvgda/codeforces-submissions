#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int l, b;
    cin >> l >> b;
    int years = 0;
    while (l <= b)
    {
        years++;
        l *= 3;
        b *= 2;
    }
    cout << years << endl;

    return 0;
}