#include <bits/stdc++.h>
using namespace std;
#define py cout << "YES" << endl
#define pn cout << "NO" << endl

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int maxi = max(a, max(b, c));
        int reqIntial = 0;
        reqIntial += (maxi - a);
        reqIntial += (maxi - b);
        reqIntial += (maxi - c);

        // 5 6

        if (reqIntial > n)
            pn;
        else if (reqIntial == n)
            py;

        // 5 5 5 3
        else
        {
            n = n - (maxi - a);
            n = n - (maxi - b);
            n = n - (maxi - c);
            if (n % 3 == 0)
                py;
            else
                pn;
        }
    }
}