//Pointer function demo
#include<stdio.h>
int addition(int, int);  //function decl/prototype
int main()
{
	//printf("Address of main() = %d", main);
	
	int x, y;
	int sum;
	
	printf("Enter x and y: ");
	scanf("%d %d",&x,&y);
	
	int (*ptr)(int, int);  //pointer function
	
	ptr = addition;  //function calling
	sum = (*ptr)(x,y);
	printf("\nSum of x and y = %d",sum);
	return 0;
}

int addition(int a, int b)  //function definition
{
	int c = a+b;
	return c;
}
