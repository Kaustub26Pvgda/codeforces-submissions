#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    string a, b;
    while (t--)
    {
        cin >> a >> b;
        char sizeA = a[a.length() - 1];
        char sizeB = b[b.length() - 1];

        int valA{1}, valB{1};
        for (char c : a)
            if (c == 'X')
                valA++;
        if (sizeA == 'S')
            valA *= -1;
        else if (sizeA == 'M')
            valA = 0;

        for (char c : b)
            if (c == 'X')
                valB++;
        if (sizeB == 'S')
            valB *= -1;
        else if (sizeB == 'M')
            valB = 0;

        if (valA < valB)
            cout << "<" << endl;
        else if (valA > valB)
            cout << ">" << endl;
        else
            cout << "=" << endl;
    }

    return 0;
}