#include<stdio.h>
#include<conio.h>
int main(){
	char grades;
	printf("enter the grades :");
	scanf("%c",&grades);
	switch(grades)
	{
		case 'e':printf("Excellent");
		break;
		case 'v':printf("Very Good");
		break;
		case 'g':printf("Good");
		break;
		case 'a':printf("Average");
		break;
	    case 'f':printf("fail");
		break;
	}
	return 0;
}
