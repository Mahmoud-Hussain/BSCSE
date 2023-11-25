#include <stdio.h>
void main()
{
    int i, n, t = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            t += i;
        else
            t -= i;
    }
    printf("%d", t);
}