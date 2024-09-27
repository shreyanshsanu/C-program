#include<stdio.h>
#include<math.h>
int main()
{
 float p,r,amt,ci;
 int t,n;
 printf("enter the value p.a");
 scanf("%f",&p);
 printf("enter the rate of interest");
  scanf("%f",&r);
   printf("enter the year");
     scanf("%d",&t);
     amt=p*((pow(1+(r/100),t)));
     ci=amt-p;
     printf("%0.2f",ci);
     return 0;
     
  
}
