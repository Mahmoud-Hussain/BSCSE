#include <stdio.h>
void main()
{
    int i, x, n, y;
    printf("Enter a number X: ");
    scanf("%d", &x);
    printf("Enter no. of choices: ");
    scanf("%d", &n);
    for (i = 1; i = n; i++)
    {
        --n,
            scanf("%d", &y);
        if (y != x)
        {
            if (n != 0)
            {
                printf("Wrong, %d Choice(s) Left!\n", n);
                continue;
            }
            else
            {
                printf("Wrong, %d Choice(s) Left!\n", n);
                printf("Player-1 wins!");
            }
        }
        else
        {
            printf("Right, Player-2 wins!\n");
            break;
        }
    }
}