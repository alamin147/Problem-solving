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
        int mini, maxi;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            if (p == 1)
                mini = i + 1;
            if (p == n)
                maxi = i + 1;
        }

        int rmini = n - mini + 1;
        int rmaxi = n - maxi + 1;

        int opt1 = max(rmaxi, rmini);
        int opt2 = max(maxi, mini);
        int opt3 = min(maxi + rmini, mini + rmaxi);
        cout << min({opt1, opt2, opt3}) << nl;
    }
}