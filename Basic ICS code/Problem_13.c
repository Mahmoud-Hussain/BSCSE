#include <stdio.h>
void main()
{
    int i, n, x = 1, y = 0, z = 1;
    scanf("%d", &n);
    printf("%d! = ", n);
    y = n;
    for (i = n; i > 2; --i)
    {
        x = i-1;
        printf("%d X ", x);
        y*=x;
    }
    printf("1 = %d",y);
}