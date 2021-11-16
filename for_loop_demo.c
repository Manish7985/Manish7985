//simple demo of "for" loop
#include<stdio.h>
int main()
{
	int num;
	for(num = 1; num <= 10; num++)
	{
		printf("%d  ", num);
	}
	
	//infinite numbers: 1st way
	/* for(num = 1; ; num++)
	{
		printf("%d ",num);
	}  */
	
	//infinite numbers: 2nd way
	/*for(;;)
	{
		printf("hi ");
	}*/
	return 0;
}
