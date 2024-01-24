#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int c = 0, b = 0, p = 0, n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int next = 1;
    for (int i = 0; i < n; i++)
    {
        if (next == 1)
        {
            c += a[i];
            next++;
        }
        else if (next == 2)
        {
            b += a[i];
            next++;
        }
        else if (next == 3)
        {
            p += a[i];
            next++;
        }
        if (next == 4)
        {
            next = 1;
        }
    }

    if (c > b && c > p)
        cout << "chest" << endl;
    else if (b > c && b > p)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
    return 0;
}