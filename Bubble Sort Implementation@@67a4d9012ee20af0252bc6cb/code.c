#include<stdio.h>
void bubblesort(int arr[],int n)
{
    int i,j;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }

    }
}
void printarray(int arr[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}
int main()
{
    int i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before Sorting:");
    printarray(arr,n);
    bubblesort(arr,n);
    printf("\nAfter Sorting:");
    printarray(arr,n);

    return 0;
}