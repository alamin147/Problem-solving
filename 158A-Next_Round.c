#include <stdio.h>
int main()
{
    int b, n, count = 0;

    scanf("%d %d", &n, &b);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[b - 1] && a[i] > 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
}