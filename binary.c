#include<stdio.h>
//#include<vector> 
 int binsrch(int arr[],int tar,int n)
 {
 	int start=0;
 	int end=n-1;
 	while(start<=end)
 	{
 		int mid=(start=end)/2;
 		if(tar>arr[mid])
 	     {
 	     		start=mid+1;
		  }
		  else if(tar<arr[mid])
		  {
		  	end=mid-1;
		  }
		  else{
		  	return mid;
		  }
	 }
 }
 
int main()
{
	int arr[6]={1,2,3,4,5,6,7};
	int tar=5,n;
	printf("%d",binsrch(arr,tar,n));
	return 0;
}
