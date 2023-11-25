#include <stdio.h>
void main()
{
    int i, n;
    float term, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &term);
        sum += term;
    }
    sum = sum / n;
    printf("AVG of %d inputs: %f", n, sum);
}