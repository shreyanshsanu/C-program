#include<stdio.h>
#include<conio.h>
int main()
{
int cp,sp,pr;
printf("enter the the num of cp & sp");
scanf("%d%d",&cp,&sp);
if(cp>sp){
pr=cp-sp;
printf("the profit is:,%d",pr);
}
else if(cp==sp){
	printf("notnprofit not loss");
}
else{
	printf("loss");
}
return 0;
}
