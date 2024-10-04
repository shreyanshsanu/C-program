#include<stdio.h>
#include<conio.h>
int main()
{
	int temp;
	printf("enter the temperature:");
	scanf("%d",&temp);
	if(temp<0){
		printf(" very cold \n");
	}
	else if(temp>0&&temp<10){
			printf("cold \n");
	}
	else if(temp>10&&temp<20){
			printf("normal \n");
	}
	else if(temp>20&&temp<30){
			printf("hot \n");
	}
	else if(temp>30&&temp<40){
			printf("very hot \n");
	}
	else{
		printf("to much hot wind");
	}
	return 0;
}
