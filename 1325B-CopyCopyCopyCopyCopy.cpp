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
        int n;
        cin >> n;
        ll a[n];

        forn cin >> a[i];

        sort(a, a + n);
        // 1 1 1 2 2 3 4 5
        int d = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                d++;
        }

        cout << n - d << nl;
    }
}