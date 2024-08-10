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
        int a[n + 1] = {0};
        int c[n], j = 0;
        for (int i = 0; i < n * 2; i++)
        {
            int b;
            cin >> b;
            if (a[b] == 0)
            {
                c[j] = b;
                j++;
                a[b]++;
            }

            else
                continue;
        }
        for (int i = 0; i < j; i++)
        {
            cout << c[i] << " ";
        }
        cout << nl;
    }
}