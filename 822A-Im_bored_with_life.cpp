#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long int n, m;
    cin >> n >> m;
    long long int mini = min(n, m);

    long long int ans = 1;
    for (long long int i = 1; i <= mini; i++)
        ans *= i;

    cout << ans << endl;
}