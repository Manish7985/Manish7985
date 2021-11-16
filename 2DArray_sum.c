//sum of all elements of 2d array
#include<stdio.h>
int main()
{
	int rows, col, i, j, sum = 0;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &col);
	
	int arr[rows][col];
	printf("\nEnter the array elements:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n2-D array:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<rows; i++)
	{
		for(j=0; j<col; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	printf("\nSum of 2D array= %d",sum);
	return 0;
}
