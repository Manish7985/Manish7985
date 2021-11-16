//gets() & puts() demo
#include<stdio.h>
#include<conio.h>
int main()
{
	char arr[15];  //arr can have only 15 characters
	printf("Enter your name: ");
	//scanf("%s", arr);  //traditional/general approach
	gets(arr);  //taking string as input from user
	
	//printf("\nMy name is %s",arr);
	printf("\nMy name is: ");
	puts(arr);
	return 0;
}
