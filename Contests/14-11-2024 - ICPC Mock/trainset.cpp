#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        int sum{};
        cin >> n;
        unordered_map<string, int[2]> map;
        for (int i{}; i < n; i++)
        {
            string temp;
            int gay;
            cin >> temp >> gay;
            map[temp][gay]++;
        }
        for (auto &it : map)
            sum += max(map[it.first][0], map[it.first][1]);
        cout << sum << endl;
    }

    return 0;
}