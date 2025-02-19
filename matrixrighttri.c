#include<stdio.h>
int main(){
	int arr[4][4];
// 	int n=4;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",arr[i][j]);
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
		{
			if(i==j||j>i){
				printf("%d%d",arr[i][j]);
			}
			else{
				printf("  ");
			}
		}
	}
//	return 0;
}
