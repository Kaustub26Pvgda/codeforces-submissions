#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, temp{};
    string s;
    unordered_map<int, char> map;
    vector<int> arr;
    while (t--)
    {
        string ans = "YES";
        arr.clear();
        map.clear();
        cin >> n;
        for (int i{}; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        cin >> s;

        for (int i{}; i < n; i++)
        {
            if (map.contains(arr[i]) && map[arr[i]] != s.at(i))
            {
                ans = "NO";
                break;
            }
            else
                map[arr[i]] = s.at(i);
        }
        cout << ans << endl;
    }

    return 0;
}