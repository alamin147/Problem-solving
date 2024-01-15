#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        // cout << "input";
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        bool found = false;
        for (int i = 0; i < 8; i++)
        {
            if (found == true)
                break;
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == '#' && a[i - 1][j - 1] == '#' && a[i - 1][j + 1] == '#' && a[i + 1][j - 1] == '#' && a[i + 1][j + 1] == '#')
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    found = true;
                    break;
                }
            }
        }
    }
}
