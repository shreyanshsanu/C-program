#include<stdio.h>
int main()
{ 
    int arr[]={1,2,3,4,5};
    int n=5,largest;
    largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
    printf("largest no. is %d",largest);
    return 0;
}