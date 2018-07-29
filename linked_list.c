#include<stdio.h>
//#include<alloc.h>

struct node{
int data;
struct node *link;
} *head;

struct node *insertbeg(int newdata,struct node *next)
{
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode == NULL){
   printf("Node insertion Failed!\n");
   return 0;
  }
  if(head==NULL)
  {
    newnode->data=newdata;
    newnode->link=NULL;
  }
  else
  {
   newnode->data=newdata;
   newnode->link=next;
  }
  return newnode;
}

void delete_end(struct node *next)
{
 struct node *back;
 if(next == NULL)
   printf("Linked List Empty!\n");
  else
 {
   while(next->link!=NULL)
   {
    back = next;
    next = next->link;
   }
  printf("Value Deleted : %d\n",next->data);
  free(next);
  back->link = NULL;
 }
}

void display(struct node *next)
{
 if(next == NULL)
  printf("Linked List Empty!\n");
 else
 {
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
 printf("1) Insert at Beginning\n2) Delete from End\n3) Display All Nodes\n4) Exit\n");
 scanf("%d",&choice);
 switch(choice)
  {
   case 1: printf("Enter Value to be Inserted : ");
           int data;
           scanf("%d",&data);
           head=insertbeg(data,head);
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
