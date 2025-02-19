#include<stdio.h>
int main()
{
    int arr[]={1,1,2,2,3,3};
    int n=5;
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
//   for(int i=0;i<n;i++)
//   {
//     printf("%d",i+1);
//   }
  return i+1;
}