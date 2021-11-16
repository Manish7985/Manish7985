/*  1
    1 2
    1 2 3 
    1 2 3 4   */
#include<stdio.h>
int main()
{
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	
	int i, j;
	for(i=1; i<=rows; i++)  //i:row number
	{
		for(j=1; j<=i; j++)   //j:column number
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
