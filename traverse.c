#include<stdio.h>


void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int arr[]={1,0,0,1,0,1,0,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int l=0,h=n-1;
	while(l<=h)
	{
		if(arr[l]==0)
		{
			l++;
		}
		else if(arr[h]==1)
		{
			h--;
		}
		else
		{
			swap(&arr[l],&arr[h]);
			
				h--;
				l++;
			
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
