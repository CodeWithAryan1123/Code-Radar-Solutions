#include <stdio.h>
int main()
{
    char light;
    scanf("%d",&light);
    switch(light)
    {
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Dowm");
        break;
        // default:
        // printf("Invalid");
    }
}