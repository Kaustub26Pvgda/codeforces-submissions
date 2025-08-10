#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, temp{};
    while (t--)
    {
        cin >> n;
        for (int i{}; i < n; i++)
        {
            cin >> temp;
            cout << (n + 1 - temp) << " ";
        }
        cout << endl;
    }

    return 0;
}