#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*next;
}*front=NULL,*rear=NULL;
void insert(int);
void del();
void disp();

void main()
{
 int value,choice;
 clrscr();
 printf("\nQueue Implementation using Linked list");
 while(1)
 {
  printf("\nMENU");
  printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
   {
    case 1:
    printf("\nEnter the value to be inserted: ");
    scanf("%d",&value);
    insert(value);
    break;
    case 2:
    del();
    break;
    case 3:
    disp();
    break;
    case 4:
    return;
    default:
    printf("\nWrong selection");
    }
   }
  }
  void insert(int v)
  {
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(node));
   newnode->data=v;
   newnode->next=NULL;
   if(front==NULL)
   front=rear=newnode;
   else
   rear->next=newnode;
   rear=newnode;
   printf("\nInsertion is success");
   }
   void del()
   {
    if(front==NULL)
    printf("\nQueue is empty");
    else
    {
    struct node*temp=front;
    front=front->next;
    printf("Deleted element :%d",temp->data);

    free(temp);
    }
   }
   void disp()
   {
    if(front==NULL)
    printf("\nQueue is empty");
    else
    {
    struct node *temp=front;
    while(temp!=NULL)
    {
      printf("%d ",temp->data);
      temp=temp->next;
    }
   }
  }