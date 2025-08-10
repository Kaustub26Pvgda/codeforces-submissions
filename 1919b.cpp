#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int p{}, m{};
        for (char c : s)
            if (c == '+')
                p++;
            else
                m++;

        cout << abs(p - m) << endl;
    }

    return 0;
}