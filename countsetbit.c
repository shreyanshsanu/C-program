#include<stdio.h>
int countsetbit(int n){
	int count=0;
	while (n){
		n &=n-1;
		count++;
	}
	return count;
}
int main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("%d number of set bit\n: ",countsetbit(n));
	return 0;
}



