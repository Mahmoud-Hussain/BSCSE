#include <stdio.h>
void main()
{
    int i, n, r, x = 1, y = 1, z = 1, ncr;
    scanf("%d%d", &n, &r);
    for (i = 1; i <= n; ++i)
    {
        x *= i;
    }
    for (i = 1; i <= r; ++i)
    {
        y *= i;
    }
    n = n - r;
    for (i = 1; i <= n; ++i)
    {
        z *= i;
    }
    ncr = x * y / z;
    printf("Result: %d", ncr);
}