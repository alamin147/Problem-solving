#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        ll n;
        cin >> n;
        ll a[] = {

            1,
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            11,
            22,
            33,
            44,
            55,
            66,
            77,
            88,
            99,
            111,
            222,
            333,
            444,
            555,
            666,
            777,
            888,
            999,
            1111,
            2222,
            3333,
            4444,
            5555,
            6666,
            7777,
            8888,
            9999,
            11111,
            22222,
            33333,
            44444,
            55555,
            66666,
            77777,
            88888,
            99999,
            111111,
            222222,
            333333,
            444444,
            555555,
            666666,
            777777,
            888888,
            999999,
            1111111,
            2222222,
            3333333,
            4444444,
            5555555,
            6666666,
            7777777,
            8888888,
            9999999,
            11111111,
            22222222,
            33333333,
            44444444,
            55555555,
            66666666,
            77777777,
            88888888,
            99999999,
            111111111,
            222222222,
            333333333,
            444444444,
            555555555,
            666666666,
            777777777,
            888888888,
            999999999,

        };

        int c = 0;
        for (auto i : a)
        {
            if (i <= n)
                c++;
            else
                break;
        }

        cout << c << endl;
    }
}