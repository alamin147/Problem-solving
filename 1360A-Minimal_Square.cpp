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
        int a, b;
        cin >> a >> b;
        int maxi;
        if (a >= b)
            maxi = max(a, b * 2);

        else
            maxi = max(b, a * 2);

        cout << maxi * maxi << endl;
    }
}