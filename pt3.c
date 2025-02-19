#include<stdio.h>
int main()
{
	int n=5;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(int k=0;k<i;k++)
		{
			printf("%d",k+1);
		}
		for(int l=n;l>1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	return 0;
}
