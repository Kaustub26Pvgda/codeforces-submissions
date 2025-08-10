#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a1, b1, c1, a2, b2, c2, a3, b3, c3;
    while (t--)
    {
        string ans = "NO";
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> c1 >> c2 >> c3;
        if (a1 >= b1 && a2 >= b2 && a3 >= b3 && !(a1 == b1 && a2 == b2 && a3 == b3))
        { // a is better than b
            if (a1 >= c1 && a2 >= c2 && a3 >= c3 && !(a1 == c1 && a2 == c2 && a3 == c3))
            { // a is better than c, so both
                if (c1 >= b1 && c2 >= b2 && c3 >= b3 && !(c1 == b1 && c2 == b2 && c3 == b3))
                {
                    ans = "YES";
                }
                else if (c1 <= b1 && c2 <= b2 && c3 <= b3 && !(c1 == b1 && c2 == b2 && c3 == b3))
                {
                    ans = "YES";
                }
            }
        }
        else if (b1 >= c1 && b2 >= c2 && b3 >= c3 && !(c1 == b1 && c2 == b2 && c3 == b3))
        { // b is better than c
            if (b1 >= a1 && b2 >= a2 && b3 >= a3)
            { // b is btter than a, so both
                if (a1 >= c1 && a2 >= c2 && a3 >= c3 && !(a1 == c1 && a2 == c2 && a3 == c3))
                {
                    ans = "YES";
                }
                else if (a1 <= c1 && a2 <= c2 && a3 <= c3 && !(a1 == c1 && a2 == c2 && a3 == c3))
                {
                    ans = "YES";
                }
            }
        }
        else if (c1 >= a1 && c2 >= a2 && c3 >= a3 && !(a1 == c1 && a2 == c2 && a3 == c3))
        { // c is better than a
            if (c1 >= b1 && c2 >= b2 && c3 >= b3 && !(c1 == b1 && c2 == b2 && c3 == b3))
            { // c is better than b, so both
                if (b1 >= a1 && b2 >= a2 && b3 >= a3 && !(a1 == b1 && a2 == b2 && a3 == b3))
                {
                    ans = "YES";
                }
                else if (b1 <= a1 && b2 <= a2 && b3 <= a3 && !(a1 == b1 && a2 == b2 && a3 == b3))
                {
                    ans = "YES";
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}