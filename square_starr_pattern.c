/* printing Square  * pattern
   * * * *
   * * * *
   * * * *
   * * * *    */
#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(i=1; i<=rows; i++)  //i:row number
	{
		for(j=1; j<=rows ; j++)  //j:column number
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
