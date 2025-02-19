#include<stdio.h>
int countsetbit(int arr[],int size,int k)
{
	for(int i=0;i<size;i++)
	{
	
			if(arr[i]&(1<<k))
		printf("%d",k);
	}
      else{
		printf("%d",arr[i]);
	}
    
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int k;
	printf("enter the value of k");
	scanf("%d",&k);
	countsetbit(arr,5,k);
	return 0;
}
