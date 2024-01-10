#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        char c[100];
        scanf("%s", c);

        int len = strlen(c);

        if (len > 10)
        {
            printf("%c%d%c\n", c[0], len - 2, c[len - 1]);
        }

        else
        {
            printf("%s\n", c);
        }
    }
}