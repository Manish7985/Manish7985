//swap 2 pointer numbers without using 3rd variable
#include<stdio.h>
int main()
{
	int x = 20, y = 40;   //actual variables
	int *p1, *p2;        //pointers
	
	p1 = &x;   //x is accessed by p1
	p2 = &y;  //y is accessed by p2
	
	printf("Before swapping, x = %d and y = %d", *p1, *p2);
	
	//swapping logic
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	
	printf("\nAfter swapping, x = %d and y = %d", *p1, *p2);
	return 0;
} 
