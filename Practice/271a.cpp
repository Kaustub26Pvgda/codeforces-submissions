#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isUnique(int year)
{
    int mask{};
    while (year > 0)
    {
        int digit = year % 10;
        year /= 10;

        if ((mask & (1 << digit)) != 0)
            return false;
        else
            mask ^= 1 << digit;
    }
    return true;
}

int main()
{
    int year;
    cin >> year;
    while (true)
    {
        year++;
        if (isUnique(year))
            break;
    }
    cout << year << endl;

    return 0;
}