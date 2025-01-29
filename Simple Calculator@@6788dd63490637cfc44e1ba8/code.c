#include <stdio.h>
int main()
{
    char operation;
    int a,b;
    scanf("%c",&operation);
    scanf("%d%d",&a,&b);
    int result;
    switch(operation)
    {
        case '+':
        result= a+b;
        printf("%d",result);
        break;
        case '-':
        result= a-b;
        printf("%d",result);
        break;
        case '*':
        result= a*b;
        printf("%d",result);
        break;
        case '/':
        result= a/b;
        printf("%d",result);
        break;
    }
}