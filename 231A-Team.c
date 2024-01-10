#include <stdio.h>
int main()
{

    int test, count = 0;

    scanf("%d", &test);

    for (int i = 0; i < test; ++i)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 || a == 1 && b == 0 || b == 1 && c == 0 || c == 1)
        {
            int add = a + b + c;
            if (add > 1)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
}