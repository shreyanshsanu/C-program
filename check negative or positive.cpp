#include<stdio.h>
#include<conio.h>
int main()
{
	int num1;
	printf("enter the num1 value");
	scanf("%d",&num1);
		if(num1>0){
			printf("num is positive");
		}
		else if(num1==0)
		{
				printf("num is nor positive nor negative");
		}
		else{
				printf("num is negative");
		}
		return 0;
}
