#include <bits/stdc++.h>
using namespace std;
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string a = "abcdefghijklmnopqrstuvwxyz";
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;
        sort(b.begin(), b.end());
        cout << a.find(b[n - 1]) + 1 << endl;
    }
}