#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string n;
    cin >> n;
    int len = n.length();
    int a = 0;
    for (int i = 0; i < len; i++)
    {
        if (n[i] == 'a')
            a++;
    }
    int x = len - a;
    // xxxaxxxx
    // 8 -1=7
    // 7/2+1
    // cout << a << endl;
    if (a > (len / 2))
    {
        cout << len << endl;
    }
    else
    {
        // 5-2
        int need = x - a;
        // 7-3-1
        cout << (len - need - 1) << endl;
    }
}