//print a number as many times as you want 

#include <stdio.h>
void main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", i);
    }
}
