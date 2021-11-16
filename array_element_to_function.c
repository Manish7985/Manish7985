//Passing individual array element to function
#include<stdio.h>
int main()
{
	int cgpa[] = {6, 8, 5, 7};
	            // [0]  [1]  [2]   [3]
	printf("CGPA of 2nd & 4th student is: ");
	show_cgpa(cgpa[1], cgpa[3]);  //function call
	return 0;
}

void show_cgpa(int stu2, int stu4) //function decl & definition
{
	printf("%d",stu2);
	printf(" %d",stu4);
}
