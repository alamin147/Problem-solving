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

    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        if (a.size() < 3)
            pn;
        else
        {
            if (a[0] == '1' && a[1] == '0' && a[2]!='0')
            {
                char subs[a.size() - 2];
                int j = 0;
                for (int i = 2; i < a.size(); i++)
                {
                    subs[j++] = a[i];
                }

               if (stoi(subs) >= 2)
                py;
                    // cout << "Y " << stoi(subs) << endl;
                else
                pn;
                    // cout << "N " << stoi(subs) << endl;
            }
            else
                pn;
        }
    }
}