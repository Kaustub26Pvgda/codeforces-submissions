#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, s;
    unordered_set<int> set;
    while (t--)
    {
        set.clear();
        cin >> n;
        for (int i{}; i < 2 * n; i++)
        {
            cin >> s;
            if (set.find(s) == set.end())
            {
                cout << s << " ";
                set.insert(s);
            }
        }
        cout << endl;
    }

    return 0;
}