#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    if (sum % 2 != 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}