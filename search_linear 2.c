//linear search in array for repetitive values
#include<stdio.h>
int main()
{
	int size, i, num, cnt=0;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	
	int arr[size];
	printf("\nEnter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nWhich number you want to find? ");
	scanf("%d", &num);
	
	//logic for linear search
	for(i=0; i<size; i++)
	{
		if (arr[i] == num)
		{
			cnt = i+1;
			printf("\n%d is present in the array at location = %d", num, cnt);
			
		}
	}
	if(i==size)
	   {
	   	if(cnt<1)
	    printf("%d is not found in the array!!", num);
       }
	
	return 0;
	
}
