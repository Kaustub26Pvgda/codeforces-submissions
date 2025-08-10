#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string w;
        cin >> w;
        int l = w.length();
        if (l > 10)
        {
            int wlen = l - 2;
            w = w[0] + to_string(wlen) + w[l - 1];
        }
        cout << w << endl;
    }

    return 0;
}