#include <stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for (i=1,i<n+1;i++)
    {
        s+=i;
        printf("%d",s);
    }
}