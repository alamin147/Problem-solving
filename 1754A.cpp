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
        int unsolved = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'Q')
                unsolved++;
            else if (unsolved && a[i] == 'A')
                unsolved--;
        }
        if (unsolved)

            cout << "No\n";
        else
            cout << "Yes\n";
    }
}