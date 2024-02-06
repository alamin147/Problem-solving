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
        int fI = a.find_first_of("B");
        int lI = a.find_last_of("B");

        // cout << fI << " " << lI << endl;
        cout << (lI - fI + 1) << endl;
    }
}