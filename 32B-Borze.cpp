#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string a;
    cin >> a;
    int len = a.length();
    if (len == 1)
        cout << "0\n";

    else
    {
        for (int i = 0; i < len; i++)
        {
            if (a[i] == '.')
                cout << '0';

            else
            {
                //-.
                if (a[i + 1] == '-')
                    cout << '2';
                else
                    cout << '1';
                i += 1;
            }
        }
    }
}