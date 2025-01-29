#include <stdio.h>
int main()
{
    int a,b,c,d,e,sum,percentage;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    percentage=(sum*100)/500;
    if(100<=percentage>=90)
    {
        printf("A");
    }
    else if(90<percentage>=80)
    {
        printf("B");
    }
    else if(80<percentage>=70)
    {
        printf("C");
    }
    else if(70<percentage<=60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
}