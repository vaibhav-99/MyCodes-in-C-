#include<stdio.h>
#include<malloc.h>

struct node
{
int data;
struct node *link;
} *head = NULL;

void insert(int d , struct node *h)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));

  if(newnode == NULL)
  {
    printf("Insertion Failed!\n");
    return;
  }
  newnode->data = d;
  newnode->link = NULL;

  if(h == NULL)
    head = newnode;

 else{

  while(h->link!=NULL)
   h = h->link;

   h->link = newnode;
 }
}

struct node *deletell(struct node *h)
{
 if(h == NULL)
 {
   printf("Queue Empty!\n");
   return 0;
 }
 struct node *temp = h -> link;
 printf("Value Deleted : %d\n",h->data);
 h->link = NULL;
 free(h);
 return temp;
}

void display(struct node *h)
{
  if(h == NULL)
  {
    printf("Queue Empty!\n");
    return;
  }
  printf("Queue (Front to Rear ->) : ");
  while(h!=NULL)
  {
    printf("%d ",h->data);
    h = h->link;
  }
  printf("\n");
}

int main()
{
 int choice,val;
 do{
 printf("1) Insert\n2) Delete\n3) Display the Queue\n4) Exit\n");
 scanf("%d",&choice);
 switch(choice)
  {
   case 1: printf("Enter Value to be Inserted : ");
           scanf("%d",&val);
           insert(val,head);
           break;

   case 2: head = deletell(head);
           break;

   case 3: display(head);
           break;

  }
 }
  while(choice!=4);
 return 0;
}
