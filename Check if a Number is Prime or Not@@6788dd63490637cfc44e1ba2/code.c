#include <stdio.h>
int main()
{
    int a,i=2;
    scanf("%d",&a);
    if(a%i==0)
    {
        printf("Prime");
        break;
    }
    else
    {
        printf("Not Prime");
    }
}