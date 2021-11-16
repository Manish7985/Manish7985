//insertion in the array
#include<stdio.h>
int main()
{
	int size, i, loc, val;
	printf("Enter the size of the array: ");
	scanf("%d",&size);  
	
	int arr[size];  
	printf("\nEnter the array elements:");
	for(i=0; i<size; i++)
	{                           
		scanf("%d",&arr[i]);  
	}
	printf("\nArray before insertion:\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nSize of the array before insertion = %d",size);
	printf("\nAt what location you want to add element?");
	scanf("%d",&loc);  
	printf("\nEnter the new value to be added: ");
	scanf("%d",&val);  
	
	//logic for adding new element
	for(i=size-1; i>=loc-1; i--)  
	{
		arr[i+1] = arr[i]; //forwarding of elements
	} 
	arr[loc-1] = val; //inserting the new val at vacancy
	size = size+1;  
	printf("\nArray after insertion:\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nArray size after insertion = %d",size);
	return 0;
}
