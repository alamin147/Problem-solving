#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b = "";
        cin >> a;
        for (int i = 0; i < 18; i++)
            b += "Yes";
        if (b.find(a) != -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}