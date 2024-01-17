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
        string a, b;

        cin >> a >> b;
        int a1 = 0, a2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0' && b[i] == '1')
                a1++;
            if (a[i] == '1' && b[i] == '0')
                a2++;
        }
        cout << max(a1, a2) << endl;
    }
}