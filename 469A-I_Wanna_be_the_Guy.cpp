#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int p, q;
    cin >> p;
    int a[p];
    for (int i = 0; i < p; i++)
        cin >> a[i];

    cin >> q;
    int b[q];
    for (int i = 0; i < q; i++)
        cin >> b[i];
    int final[p + q];

    for (int i = 0; i < p; i++)
    {
        final[i] = a[i];
    }
    for (int i = 0; i < q; i++)
    {
        final[i + p] = b[i];
    }
    sort(final, final + (p + q));
    unique(final,final+(p+q));

    for (int i = 0; i < (p + q); i++)
    {
        cout << final[i] << " ";
    }

    cout <<  unique(final,final+(p+q))<<endl;
}