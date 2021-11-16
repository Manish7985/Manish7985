//Name reversal
#include <stdio.h>  
#include <string.h>  
int main()  
{
	char a[30], temp;
	int i=0, j=0;
	printf("Enter your first name: ");
	scanf("%s", &a);      //only first name as the legth after space will not be reflect in j
	j = strlen(a) - 1 ;   //to get the length of a[] and to deduct the null value
	
	// logic for reversal
	while(i<j)
	{
		temp = a[j];
		a[j] = a[i];  // to reverse the character at j position with character at i position
		a[i] = temp;
		i++;
		j--;
	}
	printf("\nReversed name is: %s", a);
	
	return 0;
	
	
}
