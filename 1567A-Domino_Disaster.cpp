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
        string a;
        cin >> a;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'U')
                cout << "D";
            else if (a[i] == 'D')
                cout << "U";
            else
                cout << a[i];
        }
        cout << endl;
    }
}