#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, flag = 0;
        cin >> n >> k;
        vector<int> v(n, 1);
        int l, r, m;
        for (int i = 0; i < k; i++)
        {
            cin >> l >> r >> m;
            int global = INT_MAX;
            for (int j = l - 1; j < r; j++)
                global = min(global, v[j]);
            if (global == n)
            {
                flag = 1;
                cout << -1 << endl;
                break;
            }
            else if (m == global)
            {
                for (int j = l - 1; j < r; j++)
                {
                    if (v[j] == global)
                        v[j] += 1;
                }
            }
        }
        if (!flag)
        {
            for (auto ele : v)
                cout << ele << " ";
            cout << "\n";
        }
    }
}