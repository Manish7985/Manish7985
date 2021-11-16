//Binary search(array must be sorted) using the user-input
#include<stdio.h>
int main()
{
	int low, high, mid, size, i, item;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray created is: \n");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the value for searching: ");
	scanf("%d",&item);
	low = 0;
	high = size-1;  //last index = size-1
	mid = (low + high)/2;
	
	//logic of binary search
	while(low <= high)
	{
		if(arr[mid] < item)  //search towards right
			low = mid+1;
			
		else if(arr[mid] == item)
		{
			printf("\nItem found at index number = %d",mid);
			break;
		}
		else   //search towards left
			high = mid-1;
		
	   mid = (low + high)/2;
	}
	if(low > high)
		printf("\nItem not present in the array.");
		
	return 0;
}
