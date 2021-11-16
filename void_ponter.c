//VOID POINTER DEMO
#include<stdio.h>
int main()
{
	int x = 56;
	float y = 7.90;
	
	void *ptr = NULL;  //void pointer: points to any data type variable
	printf("Size of void *ptr = %d\n",sizeof(ptr));
	
	ptr = &x;  //void --> int
	//typecasting needed, i.e. void converted to int
	printf("Integer value using void pointer = %d", *(int *)ptr);
	
	ptr = &y;  //void --> float
	//typecasting needed, i.e. void converted to float
	printf("\nFloat value using void pointer = %f", *(float *)ptr);
	
	return 0;
}
