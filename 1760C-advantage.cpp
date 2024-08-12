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

        ll maxi = 0;
        int maxIndex;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (maxi < a[i])
            {
                maxi = a[i];
                maxIndex = i;
            }
        }
        a[maxIndex] = -1;

        ll prevMax = a[0];

        for (int i = 0; i < n; i++)
        {
            if (a[i] > prevMax)
                prevMax = a[i];
        }
        a[maxIndex] = maxi;
        for (int i = 0; i < n; i++)
        {

            if (a[i] == maxi)
            {
                if (prevMax == maxi)
                    a[i] = 0;
                else
                    a[i] = a[i] - prevMax;
            }

            else
                a[i] = a[i] - maxi;
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << nl;
    }
}