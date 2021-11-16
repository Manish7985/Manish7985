//deletion from the array
#include<stdio.h>
int main()
{
	int size, i, loc;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter the array elements:");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray before deletion:\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);   
	}                        
	printf("\nEnter the location which you want to delete: ");
	scanf("%d",&loc);  
	
	//logic for deletion
	if(loc >= size+1)
		printf("\nDeletion not possible!!");
	else
	{
		for(i=loc-1; i<size-1; i++)  
		{
			arr[i] = arr[i+1];  //moving the element backward
		} 
		size = size-1;  //size decreased by 1
		printf("\nArray after deletion:\n");
		for(i=0; i<size; i++)
			printf("%d ",arr[i]);
	}
	return 0;
}
