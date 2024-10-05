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
      ll a, b, c, dif;
      cin >> a >> b >> c;
      if (a > b)
         swap(a, b);
      dif = b - a;
      if (dif * 2 >= a && dif * 2 >= b && dif * 2 >= c)
      {
         if (c <= dif)
            cout << c + dif << nl;

         else
            cout << c - dif << nl;
      }
      else
         cout << "-1\n";
   }
}