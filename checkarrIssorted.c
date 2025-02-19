#include<stdio.h>
int main()
{
    int arr[]={1,2,3,3,4,5};
    int n=6,false,true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {
        
        }
        else{
            printf("array is not sorted ");
        }
    }
    
    return 0;
}