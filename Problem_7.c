#include <stdio.h>
void main()
{
    int i = 1;
    char x;
    for (;;)
    {
        scanf(" %c", &x);
        if (x != 'A')
        {
            printf("Input %d = %c\n", i, x);
            i++;
        }
        else
            continue;
    }
}