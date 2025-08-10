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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    
}

vector<int> bubbleSort(vector<int>& arr, int n, int a_b) {
    bool swapped;
    vector<pair<int,int>> ans;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                if (a_b == 0)
                    ans.push_back({1, j});
                else if (a_b == 1)
                    ans.push_back({2, j});
                swapped = true;
            }
        }

        if (!swapped)
            break;
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