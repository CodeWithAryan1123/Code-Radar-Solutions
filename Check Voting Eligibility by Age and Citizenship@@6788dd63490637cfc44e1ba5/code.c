#include <stdio.h>
int main()
{
    int age,ctzn;
    scanf("%d%d",age,ctzn);
    if(age>=18 && ctzn==1)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
    }
}