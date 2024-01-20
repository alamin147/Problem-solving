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
        string a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        string final = "";

        for (int i = 0; i < n; i++)
        {
            final.append(a[i]);
        }

        int count[26] = {0};
        sort(final.begin(), final.end());
        final.append(".");
        // cout << final << endl
        //      << endl;
        int k = 0;

        for (int i = 0; i < final.length(); i++)
        {
            for (int j = i + 1; j < final.length(); j++)
            {
                if (i != j)
                {
                    //     aabbcc
                    if (final[i] == final[j])
                        count[k] += 1;
                    else
                    {
                        count[k] = count[k] + 1;
                        k++;
                        i = (j - 1);
                        break;
                    }
                }
            }
        }

        // for (int i = 0; i < 26; i++)
        // {
        //     cout << count[i] << " ";
        // }
        // cout << endl;

        int numberOfCharExist = 0;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
                numberOfCharExist++;
        }

        // cout << numberOfCharExist << endl;
        bool error = 0;
        for (int i = 0; i < numberOfCharExist; i++)
        {
            if (count[i] % n == 0)
                error = 0;
            else
            {
                error = 1;
                break;
            }
        }
        if (error)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}