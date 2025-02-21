#include<stdio.h>
int main()
{
    int arr[50];
    int size,temp;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the array element ");5
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++)
    {
       for(int j=i+1;j<size;j++)
       {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       }
    }
    printf("sorted array is");
    for(int i=0;i<size;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}