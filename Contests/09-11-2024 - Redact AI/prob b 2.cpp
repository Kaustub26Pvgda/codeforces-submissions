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
        for (int i = 0; i < n - 1; i++)
        {
            string x = s.find_first_of('01');
            string y = s.find('10');
        }
    }
    return 0;
}