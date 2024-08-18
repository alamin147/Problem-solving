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
    std::string a[] = {"0",
                       "a", "b", "c", "d", "e",
                       "f", "g", "h", "i", "j",
                       "k", "l", "m", "n", "o",
                       "p", "q", "r", "s", "t",
                       "u", "v", "w", "x", "y",
                       "z"};
    while (t--)
    {
        int n;
        cin >> n;

        if (n > 52)
            cout << a[n - 52] << "zz" << nl;

        else if (n > 27)
        {
            cout << "a" << a[n - 27] << "z" << nl;
        }
        else if (n < 29)
        {
            cout << "a" << "a" << a[n - 2] << nl;
        }
    }
}
//  1 1