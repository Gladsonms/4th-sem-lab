#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*next;
}*top=NULL;
void push(int);
void pop();
void disp();

void main()
{
 int value,choice;
 clrscr();
 printf("\nStack using Linked list");
 while(1)
 {
  printf("\nMENU");
  printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
   {
    case 1:
    printf("\nEnter the value to be inserted: ");
    scanf("%d",&value);
    push(value);
    break;
    case 2:
    pop();
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
  void push(int num)
  {
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(node));
   newnode->data=num;
   if(top==NULL)
   newnode->next=NULL;
   else
   newnode->next=top;
   top=newnode;
   printf("\nInsertion is success");
   }
   void pop()
   {
    if(top==NULL)
    printf("\nStack is empty");
    else
    {
    struct node*temp=top;
    printf("Deleted element :%d",temp->data);
    top=temp->next;
    free(temp);
    }
   }
   void disp()
   {
    if(top==NULL)
    printf("\nStack is empty");
    else
    {
    struct node *temp=top;
    while(temp!=NULL)
    {
      printf("%d ",temp->data);
      temp=temp->next;
    }
   }
  }