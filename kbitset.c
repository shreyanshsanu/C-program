#include<stdio.h>
	int main(){
		int n,k;
		printf("enter the number: ");
		scanf("%d",&n);
		printf("enter the bit position to check: ");
		scanf("%d",&k);
		
		if ((n>>k) & 1){
			printf("%d the k bit is set\n",k);
		}else{
			printf("%d the k bit is not set\n",k);
			return 0;
		}
		}
		


    
    
    

