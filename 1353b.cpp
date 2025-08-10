#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// since ranges are less we can sort
int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        stable_sort(b, b + n, greater<>());

        for (int i = 0; i < k; i++)
        {
            if (b[i] > a[i])
            {
                int temp = b[i];
                b[i] = a[i];
                a[i] = temp;
            }
        }
        cout << accumulate(a, a + n, 0) << "\n";
    }
    return 0;
}