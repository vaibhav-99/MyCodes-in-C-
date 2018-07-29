#include<stdio.h>
#include<malloc.h>

struct node
{
int data;
struct node *link;
}*head = NULL;

struct node *insertbeg(int d, struct node *next)
{
 struct node *newnode = (struct node *)malloc(sizeof(struct node));
 if(newnode == NULL)
 {
  printf("Node Insertion Failed!\n");
  return 0;
 }

 if(next == NULL)
 {
   newnode->link = NULL;
   newnode->data = d;
 }

 else
 {
   newnode->data=d;
   newnode->link=next;
 }
 return newnode;
}

struct node *deletebeg(struct node *next)
{
  if(next == NULL)
  {
    printf("Stack Empty!\n");
    return NULL;
  }
  else
  {
   struct node *temp;
   temp = next->link;
   printf("Value Popped : %d\n",next->data);
   next->link = NULL;
   free(next);
   return temp;
  }
}

void display(struct node *next)
{
  if(next == NULL)
   printf("Stack Empty!\n");

  else
  {
    printf("\nStack (Top to Bottom) :-");
    while(next!=NULL)
    {
      printf("\n%d",next->data);
      next=next->link;
    }
    printf("\n\n");
  }
}

int main()
{
 int choice;
 do{
 printf("1) Push\n2) Pop\n3) Display Stack\n4) Exit\n");
 scanf("%d",&choice);
 switch(choice)
  {
   case 1: printf("Enter Value to be Pushed : ");
           int data;
           scanf("%d",&data);
           head=insertbeg(data,head);
         break;

   case 2: head=deletebeg(head);
         break;

   case 3: display(head);
         break;
  }
 }
  while(choice!=4);
 return 0;
}
