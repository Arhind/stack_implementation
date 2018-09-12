// Stack implementation
// Inserting an item in stack ( Push Operation )

#include <stdio.h>
int stack[5], top=-1;

void main()
{
	int item;

	if( top<4 )
	{ 
		printf("Enter the item\n");
		scanf("%d", &item);
		
		top = top+1;
		stack[top] = item;
	}

	else
	printf("Stack Overflow\n");

printf("%d\n", *stack);
}
