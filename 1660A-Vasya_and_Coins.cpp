#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define nl '\n'
#define forn for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a == 0)
            cout << 1 << nl;
        else
        {
            // 2=2 2=4
            // 1,2,3,4,5,6,7
            // 4=4 4=8
            // 1 2 3 4 5 6 7 8 9 10 11 12 13
            cout << (b * 2 + a) + 1 << nl;
        }
    }
}