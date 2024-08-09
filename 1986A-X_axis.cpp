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
        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        sort(a, a + 3);

        int ans = 0;
        ans += abs(a[1] - a[0]);
        ans += abs(a[1] - a[2]);
        cout << ans << endl;
    }
}