#include<stdio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *link;
} *head=NULL;

struct node *insertend(int newdata, struct node *next)
{
  struct node *temp = next;
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode == NULL)
  {
   printf("Node Insertion Failed!\n");
   return 0;
  }
  newnode->data = newdata;
  if(next == NULL)
  {
    newnode -> link = NULL;
    return newnode;
  }
  else
   {
    while(next->link != NULL)
      next = next->link;

    next->link = newnode;
   }
  return temp;
}

void delete_end(struct node *next)
{
 struct node *back = NULL;
 if(next == NULL)
  printf("Stack Empty!\n");

 else
 {
  while(next->link!=NULL)
  {
    back = next;
    next = next->link;
  }
   if(next == head)
    back = next;
   if(back!=NULL)
   {
     printf("Value Deleted : %d\n",next->data);
     back->link=NULL;
   }
   if(next == head)
    head=NULL;

  free(next);
 }
}

void display(struct node *next)
{
  if(next == NULL)
   printf("Stack Empty!\n");

  else
  {
   printf("Stack : ");
   while(next!=NULL)
   {
     printf("%d ",next->data);
     next = next->link;
   }
   printf("\n");
  }
}

main()
{
 int choice;
 do{
 printf("1) Insert at End\n2) Delete from End\n3) Display All Nodes\n4) Exit\n");
 scanf("%d",&choice);
 switch(choice)
  {
   case 1: printf("Enter Value to be Inserted : ");
           int data;
           scanf("%d",&data);
           head=insertend(data,head);
         break;

   case 2: delete_end(head);
         break;

   case 3: display(head);
         break;
  }
 }
  while(choice!=4);
 return 0;
}
