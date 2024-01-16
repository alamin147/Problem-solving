#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        sort(a.begin(), a.end());

        int k = 0;
        for (int i = 0; i < 26; i++)
        {
            int tem = 0;
            for (int j = 0; j < n; j++)
            {
                if (b[i] == a[j])
                    tem++;
                if (tem >= (i + 1))
                {
                    k++;
                    break;
                }
            }
        }
        cout << k << endl;
    }
}