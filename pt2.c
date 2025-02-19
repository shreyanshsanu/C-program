//1
//121

#include<stdio.h>
int main()
{
	int n=4;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(int k=0;k<=i;k++)
		{
			printf("%d",k+1);
		}
		for(int l=i;l>=1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
}

// holow pattern
      
//      for(int i=0;i<n;i++)
//      {
//      	for(int j=0;j<n-i-1;j++)
//      	{
//      		printf(" ");
//		  }
//		  printf("*");
//		  if(i!=0)
//		  {
//		  	for(int k=0;k<2*i-1;k++)
//		  	{
//		  		printf(" ");
//			  }
//			  printf("*");
//		  }
//			  printf("\n");
//		  }
//		     for(int i=0;i<n-1;i++)
//      {
//      	for(int j=0;j<i+1;j++)
//      	{
//      		printf(" ");
//		  }
//		  printf("*");
//		  if(i!=n-2)
//		  {
//		  	for(int k=0;k<2*(n-i)-n;k++)
//		  	{
//		  		printf(" ");
//			  }
//			  printf("*");
//		  }
//			  printf("\n");
//		  }
//		  
//		  	return 0;
//	  }








// write a pro}
