//String functions
#include<stdio.h>
#include<string.h>
int main()
{
	char a[] = {"CSE101 C Programming"};
	char b[] = {"LPU "};
	char c[3] = {"lpu"};
	char d[] = {"Phagwara"};
	char e[] = {"PhagWara Punjab"};
/*		
	printf("Length of a = %d", strlen(a));  //total no. of character
	printf("\nSize of a = %d", sizeof(a)); //total allocated size assigned to array
	
	printf("\nComparison of b and c:\n");
	int result = strcmp(b, c);  //compare arrays b & c, i.e. 0, -ve, +ve
	printf("Result of comparison = %d",result);  //-1, L(76) < l(108)
	if(result == 0)
		printf("\nArray b & c are equal!");
	else
		printf("\nArray b & c are different!");   

	printtf("\nSTRNCMP()\n");
	int res = strncmp(d, e, 4);
	printf("res = %d",res);
	if(res == 0)
		printf("\nArray d and e are equal!");
	else
		printf("\nArray d and e are different!");   
		
	//string concatenation: combining strings
	//strcat(b,d);
	//printf("\nConcatenated String = %s",b);
	
	//String copy: strcpy()
	printf("\nString b before copy = %s",b);
	strcpy(b, a);
	printf("\nString b after copy = %s",b);
	return 0; 
	
	//String copy: strncpy()
	printf("\nString d before copy = %s",d);
	strncpy(d, e, 12);
	printf("\nString b after copy = %s",d); */
	 
	//String reverse:
	printf("\nString c before reverse= %s",c);
	printf("\nString c after reverse = %s",strrev(c));
}
