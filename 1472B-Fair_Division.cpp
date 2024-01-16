#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1472/B
//  fair division - coin divide

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
        int a[n], ones = 0, twos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                ones++;
            else
                twos++;
        }
        // cout << ones << " " << twos << " ";

        if ((ones % 2 == 0 && twos % 2 == 0) || (twos % 2 && ones >= 2 && ones % 2 == 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}