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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int minOne = min(a, b);
        int minTwo = min(c, d);
        int maxOne = max(a, b);
        int maxTwo = max(c, d);
        if (maxOne == maxTwo && minOne + minTwo == maxOne)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}