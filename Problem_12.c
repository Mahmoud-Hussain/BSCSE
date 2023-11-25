#include <stdio.h>
void main()
{
    int i, n, x = 0, y = 1, z = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i <= 1)
            z = i;
        else
        {
            z = x + y;
            x = y;
            y = z;
        }
        printf("%d ", z);
    }
}