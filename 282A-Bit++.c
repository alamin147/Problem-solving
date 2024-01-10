#include <stdio.h>
#include <string.h>
int main()
{
    int n, x = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char a[4];
        scanf("%s", a);

        if (strcmp(a, "X++") == 0)
        {
            x++;
        }

        else if (strcmp(a, "++X") == 0)
        {
            ++x;
        }

        else if (strcmp(a, "--X") == 0)
        {
            --x;
        }

        else if (strcmp(a, "X--") == 0)
        {
            x--;
        }
    }
    printf("%d\n", x);
}