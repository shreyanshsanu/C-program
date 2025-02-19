#include<stdio.h>
int main()
{
//	int n=5;
//	int arr[5]={1,2,3,4,5};
//	for(int str=0;str<n; str++)
//	{
//		for(int end=str;end<n-1;end++){
//			for(int i=str;i<=end;i++)
//			{
//			printf("%d",arr[i]);
//			}
//			
//		}
//		printf("\n");
//	}
	int n=5;
	int arr[5]={1,2,3,4,5};
    int	maxsum= INT_MIN;
	for(int str=0;str<n; str++)
	{ 
	    int cursum=0;
		for(int end=str;end<n-1;end++){
			cursum+=arr[end];
			maxsum= max(cursum,maxsum);
		}
		printf("%d",maxsum);
}
