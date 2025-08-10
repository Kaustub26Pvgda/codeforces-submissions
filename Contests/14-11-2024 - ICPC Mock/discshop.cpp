#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t, x;
    string n;
    cin >> t;
    while (t--)
    {
        cin >> x;
        n = to_string(x);
        for (int i{}; i < n.length(); i++)
        {
            if (i != n.length() - 1 && n[i] >= n[i + 1])
            {
                n.erase(i, 1);
                break;
            }
            if (i == n.length() - 1)
            {
                n.erase(i, 1);
            }
        }
        cout << stoi(n) << "\n";
    }

    return 0;
}