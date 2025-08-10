#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int countA{}, countB{}, countC{};
        for (char c : s)
        {
            if (c == 'A')
                countA++;
            else if (c == 'B')
                countB++;
            else
                countC++;
        }
        if ((countA + countC) == countB)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}