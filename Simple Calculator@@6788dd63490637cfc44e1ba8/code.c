#include <stdio.h>
int main()
{
    int a,b;
    char operation;
    scanf("%d%d%c",&a,&b,&operation);
    int s,m,d,su;
    switch(operation)
    {
        case '+':
        s=a+b;
        printf("%d",s);
        break;
        case '-':
        su=a-b;
        printf("%d",su);
        break;
        case '*':
        m=a*b;
        printf("%d",m);
        break;
        case '/':
        d=a/b;
        printf("%d",d);
        break;
    }
}