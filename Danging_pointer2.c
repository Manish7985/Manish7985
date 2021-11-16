//Demo for dangling pointer
#include<stdio.h>

int *show()
{
	static int a = 567;
	return &a;
}

int main()
{
	int *ptr = show();
	printf("Value returned by function = %d", *ptr);
	return 0;
}
