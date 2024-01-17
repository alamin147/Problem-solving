#include <bits/stdc++.h>
using namespace std;

int mod(int num)
{
    if (num < 0)
        num = num * (-1);
    return num;
}

int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(a, a + m);
    int min = 100000;
    for (int i = 0; i <= m - n; i++)
    {
        if (mod(a[i] - a[i + (n - 1)]) < min)
        {
            min = mod(a[i] - a[i + (n - 1)]);
        }
    }
    cout << min << endl;
}