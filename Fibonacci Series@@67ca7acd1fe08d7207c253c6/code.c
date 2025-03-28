#include<stdio.h>
int fibonacci(int n)
{
    int a=0,b=1,i,next;
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=2;i<n;i++)
    {
        next=a+b;
        printf("%d",next);
        a=b;
        b=next;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    fibonacci(n);
}