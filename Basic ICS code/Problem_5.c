#include <stdio.h>
void main()
{
    int i, x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y)
    {
        for (x; x > y; x--)
        {
            printf("%d, ", x * x);
        }
    }
    else
    {
        for (x; x < y; x++)
        {
            printf("%d, ", x * x);
        }
    }
    printf("Reached!");
}