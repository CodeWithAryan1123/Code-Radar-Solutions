#include <stdio.h>
int main()
{
    int a,b;
    char operation;
    scanf("%d%d%c",&a,&b,&operation);
    int result;
    switch(operation)
    {
        case '+':
        result=a+b;
        printf("%d",result);
        break;
        case '-':
        result=a-b;
        printf("%d",result);
        break;
        case '*':
        result=a*b;
        printf("%d",result);
        break;
        case '/':
        result=a/b;
        printf("%d",result);
        break;
    }
}