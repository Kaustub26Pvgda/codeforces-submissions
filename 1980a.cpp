#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cout << "Test123";
    int t;
    int n, m;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cin >> s;
        int ans{};
        int arr[7] = {0};
        for (char c : s)
            arr[c - 'A']++;
        for (int i : arr)
            ans += (m - i > 0) ? m - i : 0;
        cout << ans << endl;
    }

    return 0;
}