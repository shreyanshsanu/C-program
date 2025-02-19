#include<stdio.h>
void leader(int arr[],int n)
{
	int cur_led=arr[n-1];
	printf("%d",cur_led);
	for(int i=n-2;i>0;i--)
	{
		if(cur_led<arr[i])
		{
			cur_led=arr[i];
			printf("%d",cur_led);
		}
	}
}
int main()
{
	int arr[20],n;
	printf("enter the element");
	scanf("%d",&n);
	printf("enter the array elemnt");
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	leader(arr,n);
	return 0;
}
