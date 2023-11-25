#include <stdio.h>
void main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
			i = 1;
            break;
        }
    }
    if (i==1)
        printf("Prime");
    else
        printf("Not Prime");
}
