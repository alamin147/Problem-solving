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
        int max = 0;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int temMax = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                temMax++;
            else
            {
                if (temMax >= max)
                    max = temMax;
                temMax = 0;
            }
        }
        if (temMax != 0 && max < temMax)
            cout << temMax << endl;
        else
            cout << max << endl;
    }
}