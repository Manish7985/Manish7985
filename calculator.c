//Simple calculator using switch-case
#include<stdio.h>
int main()
{
	int num1, num2, choice;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("\nNum1 = %d \t Num2 = %d",num1, num2);
	
	printf("\nChoose your operation from below choices-");
	printf("\n1-->Addition\n2-->Substraction\n3-->Divide\n4-->Multiply\n5-->Modulos\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nAddition of %d and %d = %d",num1, num2, (num1+num2));
			break;
		case 2:
			printf("\nDifference of %d and %d = %d",num1, num2, (num1-num2));
			break;
		case 3:
			printf("\nDivision of %d and %d = %d",num1, num2, (num1/num2));
			break;
		case 4:
			printf("\nMultiplication of %d and %d = %d",num1, num2, (num1*num2));
			break;
		case 5:
			printf("\nRemainder of %d and %d = %d",num1, num2, (num1%num2));
			break;
		default:
			printf("\nWrong choice of operation....");
	}
	return 0;
}
