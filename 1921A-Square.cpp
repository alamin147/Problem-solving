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
        int x[4], y[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> x[i] >> y[i];
        }
        for (int i = 1; i < 4; i++)
        {
            if (x[0] == x[i])
            {
                int tem = (y[0] - y[i]);

                cout << tem * tem << endl;
                break;
            }
        }
    }
}