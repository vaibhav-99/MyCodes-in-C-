#include<stdio.h>
int arr[100];
int top = -1;

void push(int x)
{
	if(top == 100-1)
	{
     printf("Error: stack overflow \n");
	 return;
	}
	else
	{
	 top = top+1;
	 arr[top] = x;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("Error: stack underflow \n");
		return;
	}
	else
	top = top-1;
}

int topd()
{
	return arr[top];
}

void print()
{
	int i;
	printf("Stack:");
	for(i=0;i<=top;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}


int main()
{
	push(2);print();
	push(4);print();
	push(10);print();
	pop();
	push(8);print();
	push(9);print();
	pop();print();

	return 0;


}
