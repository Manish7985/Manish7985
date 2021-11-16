//ASCII value of a character
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the character of your choice: ");
	scanf("%c",&ch);
	
	printf("ASCII value of your character is: %d", ch);
	//using %d format specifier to convert 'char'-->'int', 
	//This is called AUTOMATIC TYPE CASTING.
	
	printf("\nASCII value of %c is: %d", ch, ch);
}
