#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    cout << min(min((d1 + d2 + d3), (2 * d1 + 2 * d2)), min((2 * d2 + 2 * d3), (2 * d1 + 2 * d3)));

    return 0;
}