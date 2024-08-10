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

    string a = "314159265358979323846264338327";
    int t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;
        int c = 0;
        for (int i = 0; i < b.length(); i++)
        {
            if (a[i] == b[i])
                c++;
            else
                break;
        }
        cout << c << nl;
    }
}