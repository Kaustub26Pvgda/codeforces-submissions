#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll res{};
        int arr[n];
        for (int i{}; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i{}; i < n / 2; i++)
            res += arr[n - i - 1] - arr[i];
        cout << res << endl;
    }
    return 0;
}