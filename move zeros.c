#include<stdio.h>
void swap(int a[],int c,int i){

int temp;

	temp=a[c];
	a[c]=a[i];
	a[i]=temp;
}
void movezeros(int arr[],int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr,c,i);
			
			c++;
		}
	}
}
int main()
{
	int arr[20],n;
	printf("enter the number");
	scanf("%d",&n);
		printf("enter the element array");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		movezeros(arr,n);
		for(int i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
}
