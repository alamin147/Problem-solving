#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        int od = 0, ev = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (a[i] % 2 == 0)
                ev++;
            else
                od++;
        }
        if (ev == od)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}