#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        for (int i{}; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        ll preSum = 0;
        for (int m{1}; m <= n; m++)
        {
            preSum += arr[m - 1];
            ll tempSum = preSum;
            for (int i{m - k - 1}; i >= 0; i -= (k + 1))
                tempSum -= arr[i];
            cout << tempSum << " ";
        }
        cout << endl;
    }

    return 0;
}