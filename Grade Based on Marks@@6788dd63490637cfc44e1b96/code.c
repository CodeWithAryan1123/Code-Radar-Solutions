#include <stdio.h>
int main()
{
    int a,b,c,d,e,sum,percentage;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    percentage=(sum*100)/500;
    if(percentage>=90)
    {
        printf("A");
    }
    else if(percentage>=80 && percentage<90)
    {
        printf("B");
    }
    else if(percentage>=70 && percentage<80)
    {
        printf("C");
    }
    else if(percentage>=60 && percentage<70)
    {
        printf("D");
    }
    else 
    {
        printf("F");
    }
}