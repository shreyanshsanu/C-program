#include<stdio.h>
int main()
{	 
 int rows=3;
  int cols=3;
  int matrix[rows][cols];
  printf("enter the matrix element :\n");
  for(int i=0;i<rows;i++)
  {
  	 for(int j=0;j<cols;j++){
  	 	scanf("%d",&matrix[i][j]);
	   }
  }
  printf("\n matrix");
  for(int i=0;i<rows;i++)
  {
  	 for(int j=0;j<cols;j++)
  	 {
  	 	printf("%d",matrix[i][j]);
	   }
  }
  printf("\nZ pattern");
  for(int j=0;j<cols;j++)
  {
  	printf("%d",matrix[0][j]);
  }
   for(int i=0;i<rows;i++)
  {
  	printf("%d " "",matrix[i][cols-i-1]);
}
     for(int j=0;j<cols;j++)
  {
  	printf("%d",matrix[rows-1][j]);
  }
 printf("\n");
}
