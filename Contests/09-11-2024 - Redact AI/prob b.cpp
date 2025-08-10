#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n;
    string s, r;
    while (t--)
    {
        int flag{};
        cin >> n;
        cin >> s;
        cin >> r;

        if (s == "11" || s == "00")
            cout << "NO" << endl;
        else if (s == "11" || s == "11")
            cout << "YES" << endl;
        else
        {
            unordered_map<int, int> map;
            map[0] = 0;
            map[1] = 0;
            for (int i = 0; i < n; i++)
                map[s[i] - '0']++;

            for (int i = 0; i < n - 1; i++)
            {
                if (r[i] == 1)
                {
                    map[0]--;
                    if ((map[0] == 0) && (map[1] == (n - (i + 1))))
                    {
                        flag = 1;
                        break;
                    }
                }
                else
                {
                    map[1]--;
                    if ((map[0] == 1) && (map[0] == (n - (i + 1))))
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
                cout << "NO" << endl;
            else if (flag == 0)
                cout << "YES" << endl;
        }
    }

    return 0;
}