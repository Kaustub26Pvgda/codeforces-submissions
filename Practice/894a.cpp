#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int countQ{}, currQ{}, ans{};
    for (char c : s)
        if (c == 'Q')
            countQ++;
    for (char c : s)
    {
        if (c == 'Q')
            currQ++;
        else if (c == 'A')
            ans += currQ * (countQ - currQ);
    }
    cout << ans << endl;

    return 0;
}