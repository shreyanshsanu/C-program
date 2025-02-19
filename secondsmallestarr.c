#include<stdio.h>
int main()
{
    int arr[]={3,2,6,4,5};
    int n=5;
    int smallest=arr[0];
    int secondsmall=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            secondsmall=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secondsmall && arr[i]<smallest){
            secondsmall=arr[i];
        }
    }
    printf("second smallest no. is %d",secondsmall);
    return 0;
}