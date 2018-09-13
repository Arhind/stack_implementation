// Stack implementation
// Inserting an item in stack ( Pop Operation )

#include <stdio.h>
int stack[5]={ 1,2,3,4,5 };
int top;

void main()
{
	int item;

	if( top >= 0 )
	{
		item = stack[top];
		top = top-1;
		printf("Deleted number : %d\n", item);
	}
	else 
		printf("Stack Underflow\n");

printf("%d\n", *stack);
}
