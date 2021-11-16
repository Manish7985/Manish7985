#include<stdio.h>
int main()
{
	int a = 20, b = 10;
	switch(a>b && a+b >20) //result will be either true(1)/false(0)
	{
		case 1:  //if expr is TRUE
			printf("\nHello 2021!!");
			break;
		case 0:  //if expr is FALSE
			printf("\nBye 2021!!");
			break;
		default:
			printf("\nInvalid result");
	}
	return 0;
}
