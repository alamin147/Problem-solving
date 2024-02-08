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

        long long int l, r;
        cin >> l >> r;
        if (l * 2 <= r)
        {
            cout << l << " " << l * 2 << endl;
        }
        else
            cout << "-1 -1\n";
    }
}