#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    char a[] = "codeforces";
    while (t--)
    {
        string b;
        cin >> b;
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if (b[i] != a[i])
                count++;
        }
        cout << count << endl;
    }
}