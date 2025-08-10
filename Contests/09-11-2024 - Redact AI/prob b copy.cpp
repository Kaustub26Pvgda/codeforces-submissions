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

        unordered_map<int, int> map;
        map[0] = 0; map[1] = 0;
        for (int i = 0; i < n; i++)
            map[s[i] - '0']++;

        
    }

    return 0;
}