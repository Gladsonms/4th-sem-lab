#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
}*top=NULL;
void push(int);
void pop();
void display();
void main()
{
  int ch,value;
  clrscr();
  printf("\nSTACK USING LINKED LIST\n");
  while(1)
  {
  printf("\nMENU\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
  ptrintf("Enter your choice\n") ;
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: printf("\n Enter the value to be inserted");
	    scanf("%d",&value);
	    push(value);
	    break;
    case 2 : pop();
	     break;
    case 3 : display();
	     break;
    case 4 : exit(0);
    default : printf("\n Wrong choice");
   }
  }
}
 void push(int num)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(node));
newnode->data=num;
if(top==NULL)
newnode->next=NULL;
else
newnode->next=top;
top=newnode;
printf("\nInsertion is successful");
}
void pop()
{
if(top==NULL)
printf("\n Stack is empty");
else
{
struct node *temp=top;
printf("Deleted element %d",temp->data);
top=temp->next;
free(temp);
}
}
void display()
{
if(top==NULL)
printf("\n Stack is empty");
else
{
struct node *temp=top;
while(temp->next!=NULL)
printf("%d",temp->data);
temp=temp->next;
}
}