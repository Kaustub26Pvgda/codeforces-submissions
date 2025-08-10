#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    int coll{};
    vector<int> r, b;
    int temp1, temp2;
    for (int i{}; i < n; i++)
    {
        cin >> temp1 >> temp2;
        r.push_back(temp1 * temp2);
    }
    for (int i{}; i < m; i++)
    {
        cin >> temp1 >> temp2;
        b.push_back(temp1 * temp2);
    }

    for (int i{}; i < r.size(); i++)
    {
        for (int j{}; j < b.size(); j++)
        {
            if (r.at(i) == b.at(j))
            {
                coll++;
                r.erase(r.begin() + i);
                b.erase(b.begin() + j);
            }
        }
    }
    cout << coll << endl;
    return 0;
}