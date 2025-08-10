#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int secondsRemaining = x+1;
    bool buttonActive = false;
    bool failed = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            
            if (buttonActive) secondsRemaining--;
        } else if (arr[i] == 1) {
            if (!buttonActive) buttonActive = true;
            secondsRemaining--;
        }
        if(secondsRemaining==0) buttonActive=true;

        if (secondsRemaining < 0) {
            cout << "NO" << endl;
            failed = true;
            break;
        }
    }

    if (!failed) {
        cout << "YES" << endl;
    }
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