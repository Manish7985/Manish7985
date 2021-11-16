//simple demo of switch-case statement
#include<stdio.h>
int main()
{    //start of main
	int x = 20;
	switch(x)
	{     //starting body of switch case
		case 2:
			printf("\nHi..");
			break;
		case 20:
			printf("\nHello..");
			break;
		case 200:
			printf("\nHey..");
			break;
		default:
			printf("\nNo match found...");
	}    //ending body of swicth case
	return 0;
}   //end of main
