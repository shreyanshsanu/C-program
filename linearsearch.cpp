#include<iostream>
using namespace std;
int linearsrh(int arr[],int size,int target)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int size=5;
	int target=9;
   printf("%d",	linearsrh(arr,size,target));
	return 0;
}
