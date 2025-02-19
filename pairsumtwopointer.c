#include<stdio.h>
void doublets(int sortedarray[],int n,int sum){
	int left,right;
	 left = 0;right =n-1;
	while(left<right){	
		if (sortedarray[left] + sortedarray[right] < sum){
			left++;
		}else if (sortedarray[left] + sortedarray[right] > sum){
			right--;
		}else{
			printf("the doublets find the target sum %d is %d and %d",sum,sortedarray[left],sortedarray[right]);
			return;
		}
	}
	printf("no doublets are found");
    }
    void sorted(int arr[],int n){
    	for(int i=0;i<n-1;i++){
    		for(int j=0;j<n-1-i;j++){
    		if(arr[j]>arr[j+1])
    		{
    			int temp = arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
    			i--;
			}
		}
	}
}
		int main(){
			int n,sum;
			printf("enter the size of array: ");
			scanf("%d",&n);
			printf("enter the target sum: ");
			scanf("%d",&sum);
			
			int arr[n];
			printf("enter the array elements: ");
			for(int i=0;i<n;i++){
			    scanf("%d",&arr[i]);
			}
			doublets(arr,n,sum);
			return 0;
		}
    
