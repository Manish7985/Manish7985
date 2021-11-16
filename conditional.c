#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter marks ");
	scanf("%d", &marks);
	
	if (marks>=95)
	{
		printf("Grade=A");
	}
	
	if (marks<=94, marks>=90)
	{
		printf("Grade=A-");
	}
	
	if (marks<=89, marks>=80) 
	{
		printf("Grade=B");
	}
	
	if (marks<=79, marks>=70)
	{
		printf("Grade=C");
	}
	
    if (marks<70)
	{
		printf("Grade=D");
	}
	return 0;	
}
