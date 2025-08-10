#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        unordered_map<char, int> map;
        cin >> n;
        string s;
        int flag{1};
        for (int i{}; i < n; i++)
        {
            cin >> s;
            for (char c : s)
                map[c]++;
        }
        for (const auto &[key, value] : map)
        {
            if (value % n != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}