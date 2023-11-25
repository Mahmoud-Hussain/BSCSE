#include <stdio.h>
void main()
{
    int i, n, term = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", i % 2);
    }
}