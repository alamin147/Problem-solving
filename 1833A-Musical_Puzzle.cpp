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
        string b;
        cin >> b;

        unordered_map<string, int> hashmap;
        for (int i = 0; i < n - 1; i++)
        {
            string c = "";
            c += b[i];
            c += b[i + 1];
            hashmap[c]++;
        }
        int s = 0;
        for (const auto &pair : hashmap)
        {
            s++;
            // cout << "Key: " << pair.first << ", Value: " << pair.second << nl;
        }
        cout << s << nl;
    }
}