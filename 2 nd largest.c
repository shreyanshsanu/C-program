#include<stdio.h>


void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int arr[]={10,7,11,6,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1; j<n; j++)
		{
			swap(&arr[i],&arr[j]);
		}
	}
	printf("%d",arr[n-1]);
}
