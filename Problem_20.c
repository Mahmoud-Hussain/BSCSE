#include<stdio.h>
void main()
{
    int i,n,t=0,sum =0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=t*10+i;
        sum+=t;
    }
    printf("%d",sum);
}