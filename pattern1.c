//Square pattern

#include<stdio.h>

	int main()
	
	{
		int n=5;
		int num=1;
		
		for(int i=0;i<n;i++)
		{
//			int num=1;
			for(int j=0;j<i;j++)
			{
				printf(" ");
//				num++;
			}
			for(int k=0;k<n-i;k++)
			{
				printf("%d",i+1);
			}
			printf("\n");
		}
	}


