#include <stdio.h>
void main()
{
    int x, y, i, gcd, lcm;
    printf("Enter two numbers: \n");
    scanf("%d %d", &x, &y);
    for (i = 1; i <= x && i < y; i++)
    {
        if (x % i == 0 && y % i == 0)
            gcd = i;
    }
    lcm = (x * y) / gcd;
    printf("GCD : %d\n", gcd);
    printf("LCM : %d\n", lcm);
}