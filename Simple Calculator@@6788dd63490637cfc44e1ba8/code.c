#include <stdio.h>
int main()
{
    int a,b;
    char operation;
    scanf("%d%d%c",&a,&b,&operation);
    int s=a+b,m=a*b,d=a/b,su=a-b;
    switch(operation)
    {
        case '+':
        printf("%d",s);
        break;
        case '-':
        printf("%d",su);
        break;
        case '*':
        printf("%d",m);
        break;
        case '/':
        printf("%d",d);
        break;
    }
}