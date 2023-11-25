#include <stdio.h>
void main()
{
    int i, n, x = 0, y = 1, t = 0, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        ++x;
        ++y;
        t = x * x * y;
        sum += t;
    }
    printf("%d", sum);
}