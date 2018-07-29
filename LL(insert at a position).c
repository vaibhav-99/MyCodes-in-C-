#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head;

void insert(int x, int n)
{
	struct node *temp1 = (struct node*)malloc(sizeof(struct node));
	temp1->data = x;
	temp1->next = NULL;
	if(n==1)
	{
		temp1->next = head;
		head = temp1;
	}
	else
	{
		struct node *temp2;
		temp2 = head;
		int i;
		for(i = 1; i<n-1; i++)
		{
			temp2 = temp2->next;
		}
		temp1->next = temp2->next;
		temp2->next = temp1;
	}
}

void delete1(int n)
{
	struct node* temp1 = head;
	int i;
	if(n==1)
	{
		head = temp1->next;
		free(temp1);
		return;
	}
	for(i = 1; i<n-1;i++)
	{
		temp1=temp1->next;
	}
	struct node* temp2 =temp1->next;
	temp1->next = temp2->next;
	free(temp2);
}

void print()
{
	struct node *temp1 = head;
	while(temp1!=NULL)
	{
	 printf("%d ",temp1->data);
	 temp1= temp1->next;
	}
	printf("\n");
}

int main()
{
	head = NULL;
	insert(2,1);
	insert(4,2);
	insert(6,3);
	insert(8,4);
	print();
	delete1(2);
	print();

	return 0;
}
