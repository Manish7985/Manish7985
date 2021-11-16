//Linear search in array
#include<stdio.h>
int main()
{
	int size, i, num;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter the array elements:");
	for(i=0; i<size; i++)
	{                         
		scanf("%d",&arr[i]);  
	}
	printf("\nWhich number you want to find? ");
	scanf("%d",&num);  
	
	//logic for linear search
	for(i=0; i<size; i++)  
	{
		if(arr[i] == num) 
		{
			printf("%d is present in the array at location = %d",num, (i+1));
			break;
		}
	}
	if(i == size)
		printf("%d is not found in the array!!",num);
	return 0;
}

