//Sum of first n numbers 
#include<stdio.h>
int main()
{
	int n, i, sum = 0;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		printf("%d ",i);
		sum = sum+i;
	}
	printf("\nSum of first %d numbers = %d",n,sum);
	return 0;
}
