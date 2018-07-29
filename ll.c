#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *link;
}*head=NULL;

struct node *insertll(int data1, struct node *head1)
 {
   struct node *newnode;
   newnode = (struct node*)malloc(sizeof(struct node));    // making new node

   if(newnode == NULL)
   {
    printf("Overflow\n");
    return 0;
   }

   else{

    if(head1 == NULL)
    {
      newnode->data = data1;
      newnode->link = NULL;
      return newnode;
    }

    else
    {
     newnode->data = data1;
     newnode->link = head1;
     return newnode;
    }
    printf("New node inserted!\n");
   }
 }

 struct node *deletell(struct node *head1)
 {
   if(head1 == NULL)
    printf("Underflow\n");

   else{
    struct node *temp;
    temp = head1->link;
    printf("Value Deleted : %d\n", head1->data);
    head1->link = NULL;
    free(head1);
    return temp;
   }
 }

 void display(struct node *head1)
 {
   if(head1 == NULL)
     printf("Linked List Empty!\n");

   else{
    while(head1!=NULL)
    {
      printf("%d ",head1->data);
      head1 = head1->link;
    }
    printf("\n");
   }
 }

 int main()
 {
   int ch,val;
   do{
    printf("1)Insert\n2)Delete\n3)Display\n4)Exit\n");
    scanf("%d",&ch);

    switch(ch)
    {
      case 1:
             printf("Enter value to be Inserted : ");
             scanf("%d",&val);
             head = insertll(val,head);
             break;

      case 2:head = deletell(head);
             break;

      case 3:display(head);
             break;
    }
   }
   while(ch!=4);
  return 0;
 }
