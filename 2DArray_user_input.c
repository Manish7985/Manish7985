//2-d array from user
#include<stdio.h>
int main()
{
	int arr[3][3], i,j;
	printf("Enter the array elements:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nArray created by you: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
