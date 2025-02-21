         //BRUTE CODE//

// #include<stdio.h>
// int main()
// {
//     int arr[]={1,2,3,4,5,6};
//     int n=6,d=d%n;
//     int temp[d];
//     for(int i=0;i<d;i++)
//     {
//         temp[i]=arr[i];
//     }
//     for(int i=d;i<n;i++)
//     {
//         arr[i-d]=arr[i];
//     }

//     for(int i=n-d;i<n;i++)
//     {
//         arr[i]=temp[i-(n-d)];
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//         return 0;
//     }

// }

                            //OPTIMAL CODE//
 #include<stdio.h>
 void reverse(int arr[],int start,int end)
 {
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
 }  
 void rotatearr(int arr[],int n,int k)
 {
    reverse(arr,0,n-k-1);//reverse n-k element
    reverse(arr,n-k,n-1);//reverse entire element

 }
 int main()
 {
    int arr[]={1,2,3,4,5,6};
    int n=6,k=6;
    rotatearr(arr,n,k);
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
 }