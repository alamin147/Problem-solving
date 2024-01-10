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
        int a[n], sum = 0;
        int error = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % 2 != 0)
            cout << "Yes\n";

        else if (n == 1)
        {

            if (sum % 2 != 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }

        else
        {
            // 1 2 3 4 5
            for (int i = 0; i < n - 1; i++)
            {
                if ((sum - a[i] + a[i + 1]) % 2 != 0)
                {
                    cout << "Yes\n";
                    error = 0;
                    break;
                }

                // 20-2+8
                if ((sum - a[0] + a[n - 1]) % 2 != 0)
                {
                    cout << "Yes\n";
                    error = 0;
                    break;
                }
            }

            if (error == 1)
                cout << "No\n";
        }
    }
}
