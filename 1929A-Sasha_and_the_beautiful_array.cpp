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
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int sum = 0;
        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            sum += a[i] - a[i - 1];
        }
        cout << sum << endl;
    }
}