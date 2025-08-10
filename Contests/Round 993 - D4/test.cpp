#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    int ans{};

    unordered_set<int> set;
    int t = 0;
    int max_no = r2 / l1;
    while (pow(k, t) < max_no)
        set.insert(double(pow(k, t++)));

    double calc;
    for (int x{l1}; x <= r1; x++)
    {
        for (int y{l2}; y <= r2; y++)
        {
            calc = log10(y / x) / log10(k);
            cout << "x = " << x << ", y = " << y << endl;
            if (set.contains(calc))
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}