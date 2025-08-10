#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int arr[n], sum{};
        for (int i{1}; i < n; i++)
        {
            arr[i] = i + 1;
            sum += i + 1;
        }
        arr[0] = n - (sum % n);
        for (int i{}; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}