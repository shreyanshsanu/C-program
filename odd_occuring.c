#include<stdio.h>
void find_oddoccuring(int arr[],int n){
	 int XOR=arr[0];
	 for(int i=1;i<n;i++){
	 	
	 XOR^=arr[i];
	 }
	 
	printf("%d",XOR);
    }
    int main(){
    	int n;
    	printf("enter the element: ");
    	scanf("%d",&n);
    	int arr[n];
    	//
		printf("the element in the array is\n: ");
    	for(int i=0;i<n;i++){
    	printf("enter the element in the aaray: ");
    	scanf("%d",&arr[i]);
    }
    	find_oddoccuring(arr,n);
    	return 0;
	}
    

