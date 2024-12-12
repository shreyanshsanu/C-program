#include<stdio.h>
int mian()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n&(n-1)==0)
	{
		printf("yes it is power of n");
	}
	else
	{
		printf("no it is power of n");
	}
	return 0;
}
