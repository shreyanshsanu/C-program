#include<stdio.h>
int main(){
int arr[5]={5,9,3,8,7};
int a=arr[0];
 for(int i=0;i<5;i++)
 {
 	if(a<arr[i])
 	{
 		a=arr[i];
	 
	 }

 }
 	 printf("%d",a);
}
