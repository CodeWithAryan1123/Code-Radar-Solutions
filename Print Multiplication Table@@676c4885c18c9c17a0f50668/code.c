#include <stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        m=n*i;
        printf("%d * %d = %d\n",n,i,m);
    }
}