//String conversion functions
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int x = 23456;   //original int decimal value
	printf("Integer value = %d",x);
	
	char arr[50];
	//1. itoa()
	itoa(x, arr, 2);   //base = 2 (binary)
	printf("\nBinary value of x = %s",arr);
	
	itoa(x, arr, 16);  //base = 16 (hexadecimal)
	printf("\nHexadecimal value of x = %s",arr);
	
	itoa(x, arr, 10);  //base = 10 (decimal)
	printf("\nDecimal value of x = %s",arr);
	
	//2. atof()
	char brr[10] = "7.54";
	float cgpa = atof(brr);  //convert string -> float
	printf("\n\nYour CGPA = %f",cgpa);
	
	//3. atoi()
	int result = atoi(brr);  //convert string -> int
	printf("\n\nYour result = %d",result);
	
	//4. atol()
	char crr[] = "987654321";  //atol: 9 digits
	long int phn = atol(crr);
	printf("\n\nYour Phone number = %ld",phn);
	
	//5.atoll()  
	char drr[] = "9087654321";  //atoll: more than 9 digits, big number
	long long no = atoll(drr);
	printf("\n\nYour complete number = %lld",no);
	
	return 0;	
}
