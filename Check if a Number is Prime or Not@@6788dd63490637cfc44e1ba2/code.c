#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i=a/2+1;
    if(a>0)
    {
        if(a%i==1)
        {
            printf("Not Prime");
        }
        if(a%i==0)
        {
            printf("Prime");
        }
    }
}