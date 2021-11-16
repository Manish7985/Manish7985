//Calculating the size of data types/varibale using sizeof() operator
#include<stdio.h>
int main()
{
	printf("size of INTEGER datatype= %d byte\n", sizeof(int));
	printf("size of CHARACTER datatype= %d byte\n", sizeof(char));
	printf("size of FLOAT datatype= %d byte\n", sizeof(float));
	printf("size of DOUBLE datatype= %d byte\n", sizeof(double));
	
	int value = 234567;
	printf("\nSize of value = %d",sizeof(value));
	
	return 0;
}

