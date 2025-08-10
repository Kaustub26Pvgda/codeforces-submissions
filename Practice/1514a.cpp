#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, temp, root;
    string ans;
    while (t--)
    {
        ans = "NO";
        cin >> n;
        for (int i{}; i < n; i++)
        {
            cin >> temp;
            root = int(sqrt(temp));
            if (root * root != temp)
                ans = "YES";
        }
        cout << ans << endl;
    }

    return 0;
}