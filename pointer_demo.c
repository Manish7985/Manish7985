//Simple demo for pointers (&, *)
#include<stdio.h>
int main()
{
	int a = 100;  //actual variable
	int *ptr;   //pointer variable of type integer
	
	ptr = &a;  //ptr = address of a,   ptr---->ADDRESS(a|100|)
	
	printf("Address of varibale a = %p", &a);  //traditional way to print the address
	printf("\nAddress of a stored by ptr = %x", ptr); //pointer ptr is displaying the address of a
	
	printf("\n\nValue of a = %d", a);  //traditional way to print the value of a
	printf("\nValue of a with the help of pointer = %d",*ptr);  //value of a with the help of ptr
	
	return 0;
}
