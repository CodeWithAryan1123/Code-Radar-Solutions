#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i=a/2;
    if(a%i==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}