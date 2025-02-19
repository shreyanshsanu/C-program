#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int size=5;
	int maxsum=INT_MIN;
	for(int start=0;start<size;start++)
	{
		int currsum=0;
		for(int end=start;end<size;end++)
		{
			currsum+=arr[end];
			maxsum=max(currsum,maxsum);
		}
	}
	printf("%d",maxsum);
}
