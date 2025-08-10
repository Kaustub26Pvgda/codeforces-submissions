#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void findTopTwo(const vector<vector<int>>& matrix) {
    int maxVal = numeric_limits<int>::min();
    int secondMax = numeric_limits<int>::min();
    vector<pair<int, int>> maxPositions;
    vector<pair<int, int>> secondMaxPositions;

    for (int r = 0; r < matrix.size(); ++r) {
        for (int c = 0; c < matrix[r].size(); ++c) {
            int val = matrix[r][c];

            if (val > maxVal) {
                secondMax = maxVal;
                secondMaxPositions = maxPositions;

                maxVal = val;
                maxPositions = {{r, c}};
            } else if (val == maxVal) {
                maxPositions.push_back({r, c});
            } else if (val > secondMax) {
                secondMax = val;
                secondMaxPositions = {{r, c}};
            } else if (val == secondMax) {
                secondMaxPositions.push_back({r, c});
            }
        }
    }

    if (maxVal - secondMax >= 2)
        cout << maxVal - 1 << "\n";
    else {
        bool canFormPlus = false;
        for (int r = 0; r < matrix.size() && !canFormPlus; ++r) {
            for (int c = 0; c < matrix[r].size() && !canFormPlus; ++c) {
                bool allInPlus = true;
                for (size_t i = 0; i < maxPositions.size(); ++i) {
                    int mr = maxPositions[i].first;
                    int mc = maxPositions[i].second;
                    if (mr != r && mc != c) {
                        allInPlus = false;
                        break;
                    }
                }
                if (allInPlus) canFormPlus = true;
            }
        }
    
        if (canFormPlus) {
            bool secondMaxOutside = false;
            for (size_t i = 0; i < secondMaxPositions.size(); ++i) {
                int sr = secondMaxPositions[i].first;
                int sc = secondMaxPositions[i].second;
                bool onAnyPlus = false;
                for (int r = 0; r < matrix.size() && !onAnyPlus; ++r) {
                    for (int c = 0; c < matrix[r].size() && !onAnyPlus; ++c) {
                        bool allInPlus = true;
                        for (size_t j = 0; j < maxPositions.size(); ++j) {
                            int mr = maxPositions[j].first;
                            int mc = maxPositions[j].second;
                            if (mr != r && mc != c) {
                                allInPlus = false;
                                break;
                            }
                        }
                        if (allInPlus && (sr == r || sc == c)) {
                            onAnyPlus = true;
                        }
                    }
                }
                if (!onAnyPlus) {
                    secondMaxOutside = true;
                    break;
                }
            }
    
            if (secondMaxOutside) 
                cout << secondMax << "\n";
            else 
                cout << maxVal - 1 << "\n";
        } 
        else
            cout << maxVal << "\n";
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    findTopTwo(matrix);
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