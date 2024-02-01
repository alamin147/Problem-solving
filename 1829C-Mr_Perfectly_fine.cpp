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
        int a[n];
        string b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " " << b[i] << endl;
        // }

        int OneIndexMin = INT_MAX;
        int found1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i][0] == '1' && b[i][1] == '0')
            {
                found1 = 1;
                if (OneIndexMin > a[i])
                    OneIndexMin = a[i];
            }
        }
        int TwoIndexMin = INT_MAX;
        int found2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (b[i][1] == '1' && b[i][0] == '0')
            {
                found2 = 1;
                if (TwoIndexMin > a[i])
                    TwoIndexMin = a[i];
            }
        }
        int OneOneMin = INT_MAX;
        int found11 = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i][1] == '1' && b[i][0] == '1')
            {
                found11 = 1;
                if (OneOneMin > a[i])
                {
                    OneOneMin = a[i];
                    // cout << "f " << found11<<" "<<OneOneMin << endl;
                }
            }
        }
        if (found11 == 0)
        {
            if (found1 == 0 || found2 == 0)
                cout << "-1" << endl;

            else if (found1 && found2)
                cout << (OneIndexMin + TwoIndexMin) << endl;
        }
        else if (found11)
        {
            if (found1 == 0 || found2 == 0)
            {
                cout << OneOneMin << endl;
            }
            else if (found1 && found2)
            {
                cout << min((OneIndexMin + TwoIndexMin), OneOneMin) << endl;
            }
        }
    }
}