#include<stdio.h>
void swap(int*a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int reversearr(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
  	swap(arr[start],arr[end]);
    		start++;
    		end--;	
	}	
}
  
  int print(int arr[],int n)
  {
  	for(int i=0;i<n;i++)
  	{
  		scanf("%d",arr[i]);
	  }
  }
  int main()
  {
  	int arr[5]={1,2,3,4,5};
  	reversearr(arr,5);
  	print(arr,5);
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
