#include<stdio.h>
int main()
{
	int n;
	int ans=0;
	printf("enter the num :");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	ans=ans+(i*i*i);

	}
		printf("%d",ans);
	
}
