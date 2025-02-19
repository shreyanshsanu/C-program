#include<stdio.h>
int main()
{
////	int matrix[3][3]={{1,2,3},{4,5,6},{6,7,8}};
////	printf("matrix created \n");
////	for(int i=0;i<3;i++)
////	{
////		for(int j=0;j<3;j++)
////		{
////			printf("%d",matrix[i][j]);
////		}
////		printf("\n");
////	}
////	return 0;

//   Diagonal

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
  printf("\n matrix " "");
  for(int i=0;i<rows;i++)
  {
  	 for(int j=0;j<cols;j++)
  	 {
  	 	printf("%d " "",matrix[i][j]);
	   }
  }
  printf("the diagonal is \n" "");
  for(int i=0;i<rows;i++)
  {
  	printf("%d" "",matrix[i][i]);
  }
  printf("\n");
  for(int i=0;i<rows;i++)
  {
  	printf("%d",matrix[i][cols-i-1]);
}
   printf("\n");
 
}














 






















