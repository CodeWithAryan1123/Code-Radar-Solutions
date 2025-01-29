#include <stdio.h>
int main()
{
    char light,sign[10];
    scanf("%d",&light);
    switch(light)
    {
        case 'R':
        sign='Stop';
        printf("%s",sign);
        break;
        case 'G':
        printf("'Go'");
        break;
        case 'Y':
        printf("'Slow Down'");
        break;
        // default:
        // printf("Invalid");
    }
}