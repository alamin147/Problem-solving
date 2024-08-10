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
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < 5; i++)
        {
            if (a <= b && a <= c)
                a++;

            else if (b <= c && b <= a)
                b++;
            else
                c++;
        }

        cout << a * b * c << nl;

        // 1 6 6
    }
}