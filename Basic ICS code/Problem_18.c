#include <stdio.h>
void main()
{
    int i, n, rev = 0, rem;
    scanf("%d", &n);    
    i = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (i == rev)
        printf("Yes"); 
    else
        printf("No"); 
} 