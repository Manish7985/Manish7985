//Constant pointer demo
#include<stdio.h>
int main()
{
	int a = 900;
	int b = 230;
	
	int * const ptr =  &a;   //ptr will point to a only as ptr is decalared const
	
	printf("Value of a = %d", *ptr);
	
	ptr = &b;  //ERROR!!, ptr is for a only, can't point to b
	return 0;
}
