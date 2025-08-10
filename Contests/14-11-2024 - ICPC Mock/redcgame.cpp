#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    int n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        int sum{};
        for (int i{}; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr + n);
        int i = 0;
        while (arr[i] <= k)
            i++;

        while (i < n - 1)
        {
            if (arr[i] == k)
            {
                i++;
                continue;
            }
            int diff = arr[i] - k;
            arr[i] = k;
            arr[i + 1] -= diff;
            sum -= 2 * diff;
            i++;
        }
        cout << sum << endl;
    }

    return 0;
}