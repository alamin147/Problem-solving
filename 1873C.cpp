#include <bits/stdc++.h>
using namespace std;
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        int num = 0;
        for (int i = 1; i <= 10; i++)
            for (int j = 1; j <= 10; j++)
            {
                cin >> c;
                if (c == 'X')
                    //    1, 10, 5, 6
                    //    3  8   9, 2
                    num += min({i, 11 - i, j, 11 - j});
            }
        cout << num << endl;
    }
}
