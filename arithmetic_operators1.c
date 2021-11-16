//Simple arithmetic opeartors
#include<stdio.h>
void main()
{
	int num1, num2;
	printf("Enter the two numbers: ");
	scanf("%d %d",&num1, &num2);  //taking num1 and num2 values from user
	
	printf("\nBasic Arithmetic Operations are:\n");
	printf("num1 + num2 = %d\n",(num1+num2));
	printf("num1 - num2 = %d\n",(num1-num2));
	printf("num1 * num2 = %d\n",(num1*num2));
	printf("num1 / num2 = %d\n",(num1/num2));
	printf("num1 %% num2 = %d",(num1%num2));
}
