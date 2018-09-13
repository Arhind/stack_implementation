// Stack Implementation
// Performing Push, Pop and Traverse Functions

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
int stack[MAXSIZE], top=-1;
void push();
int pop();
void tranverse();

int main()
{
	char ch;

do{
	printf("1. PUSH\n");
	printf("2. POP\n");
	printf("3. TRAVERSE\n");
	printf("Enter your choice : \n");
	scanf("%c", &ch);

	switch( ch )
	{
		case '1' : push();
				 break;
		case '2' : pop();
				 break;
		case '3' : tranverse();
				 break;
		default : printf("Carefully enter right choice, again");
	}
	printf("Do you want to continue ( Y/N ) : ");
	fflush(stdin);
	scanf("%c", &ch);
}
while( ch == 'y' );
}

void push()
{
	int item1;

	if( top == MAXSIZE - 1)
		printf("Stack is full\n");
	else
	{

		printf("Enter the item : ");
		scanf("%d", &item1);
		top = top+1;
		stack[top] = item1;
	}
}

int pop()
{
	int item1;

	if( top == -1 )
		printf("Stack is empty\n");
	else
	{
		item1 = stack[top];
		top = top -1; 
	}
	return(item1);
}

void tranverse()
{
	if( stack[top] == -1)
		printf("Stack is empty\n");
	else
	{
		for (int i = top; i >= 0 ; --i)
		{
			printf("%d\n", stack[i]);
		}
	}
}