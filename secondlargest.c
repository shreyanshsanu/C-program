// brute force code

// #include<stdio.h>
// // int main()
// // {
// //     int arr[]={1,2,6,4,5};
// //     int n=5;
// //     int largest=arr[0];
// //     for(int i=0;i<n;i++)
// //     {
// //         if(arr[i]>largest)
// //         {
// //            largest= arr[i];
// //         }
// //     }
// //       int seclar=-1;
// //     for(int i=0;i<n;i++)
// //     {
// //         if(arr[i]>seclar && arr[i]!=largest)
// //         {
// //             seclar=arr[i];
// //         }
// //     }
// //     printf("second largset no. is %d",seclar);
// //     return 0;
// }

           //OPTIMAL CODE 
 #include<stdio.h>
 int main()
 {
    int arr[]={3,4,3,5,1};
    int n=5;
    int lar=arr[0];
    int seclar=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>lar)
        {
            seclar=lar;
            lar=arr[i];
        }
        else if(arr[i]>seclar && arr[i]>lar)
        {
            seclar=arr[i];
        }
    }
    printf("second largest no. is %d",seclar);
 }          