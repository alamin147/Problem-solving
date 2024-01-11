#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    if (!isPrime(m))
        cout << "NO\n";

    else
    {
        int error = 0;
        for (int i = n + 1; i < m; i++)
        {
            if (isPrime(i))
            {
                cout << "NO\n";
                error = 1;
                break;
            }
        }
        if (error == 0)
            cout << "YES\n";
    }
}