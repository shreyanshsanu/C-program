#include<stdio.h>
	int countsetbit(int n)
	{
		int res=0;
		while(n>0)
		{
			if(n%2==1)
		  		res++;
			n=n/2;
		  
		}
		return res;
	}
int main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("%d number of set bit\n: ",countsetbit(n));
	return 0;
}
