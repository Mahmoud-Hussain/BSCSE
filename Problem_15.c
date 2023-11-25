#include <stdio.h>
void main()
{
    int i, x, y;
    scanf("%d%d", &x, &y);
    for (i = 1; i < y; i++)
    {
        x *= x;
    }
    printf("%d", x);
}