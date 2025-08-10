#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// only 3 cases:
// 1. third word has extra letters
// 2. third word has insufficient letters
// 3. third word is valid

int main()
{
    unordered_map<char, int> map;
    char ch;
    int flag{};
    for (int i = 1; i <= 2; i++)
    {
        while (cin.get(ch) && ch != '\n')
            map[ch]++;
    }
    while (cin.get(ch) && ch != '\n')
    {
        if (map.find(ch) != map.end())
        {
            map[ch]--;
            if (map[ch] == 0)
                map.erase(ch);
        }
        else
            // letters are extra
            flag = 1;
    }
    if (flag == 1)
        cout << "NO" << endl;
    // letters are less
    else if (!map.empty())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}