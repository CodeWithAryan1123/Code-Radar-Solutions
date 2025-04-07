#include<stdio.h>
void bubbleSort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (arr[j+1]>arr[j])
            {
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
}
void printArray(int arr[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf(arr[n]);
    }
}
int main()
{
    int n,
    scanf("%d",&n)
    int arr[n];
    for(int i=0;i<n,i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}