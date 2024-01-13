// 111-96=15
// 15-27

#include <bits/stdc++.h>
using namespace std;

int mods(int n)
{
    if (n < 0)
        n = n * (-1);
    return n;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string a;
    cin >> a;
    int len = a.length();
    char b[len + 1];
    b[0] = 'a';
    int j = 1;
    for (int i = 0; i < len + 1; i++)
        b[j++] = a[i];

    int count = 0;
    for (int i = 0; i < len; i++)
    {
        // printf("%d\n",b[i]-b[i+1]);
        int t = min(mods((b[i] - b[i + 1])), (26 - mods(b[i] - b[i + 1])));
        // cout << t << endl;
        count += t;
    }

    cout << count << endl;
}