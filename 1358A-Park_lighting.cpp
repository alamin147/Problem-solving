#include <bits/stdc++.h>
using namespace std;
#define lld long long int
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
        int n, m;
        cin >> n >> m;

        if (n % 2 == 0 && m % 2 == 0)
            cout << ((min(n, m) / 2) * max(n, m)) << endl;

        else if (n % 2 != 0 && m % 2 != 0)
            cout << max(n, m) * (min(n, m) / 2) + max(n, m) / 2 + 1 << endl;

        else
        {
            if (max(n, m) % 2 == 0)
                cout << ((min(n, m) / 2) * max(n, m) + (max(n, m) / 2)) << endl;
            else
                cout << ((min(n, m) / 2) * max(n, m)) << endl;
        }
    }
}