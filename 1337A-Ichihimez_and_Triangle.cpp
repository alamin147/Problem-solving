#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b == c)
            cout << b << " " << b << " " << b << endl;
        else
        {
            // ll y = c, z = d;
            // 1 2 3 4
            //
            // 5 5   7
            // 5 7   5
            //

            cout << b << " " << c << " " << c << endl;
        }
    }
}