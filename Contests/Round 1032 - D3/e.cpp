#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

vector<int> intToDigits(int num) {
    vector<int> digits;
    if (num == 0) {
        digits.push_back(0);
        return digits;
    }
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

void solve()
{
    int l, r;
    cin >> l >> r;

    vector<int> ld = intToDigits(l);
    vector<int> rd = intToDigits(r);
    int n = ld.size();
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (ld[i] == rd[i])
            ans += 2;
        if (rd[i] - ld[i] == 1) {
            ans += 1;
            break;
        }
    }
    cout << ans << "\n";
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}