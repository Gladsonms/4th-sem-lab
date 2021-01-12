#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
} *top=NULL;
void push(int);
void pop();
void disp();
void main()
{
int ch,value;
clrscr();
printf("\n STACK USING LINKED LIST");
while(1)
{
printf("\n MENU");
printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\n Enter the value to be inserted :");
	scanf("%d",&value);
	push(value);
	break;
case 2: pop();
	break;
case 3: disp();
	break;
case 4: exit(0);
default: printf("\n Wrong selection");
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
printf("\n inserton is succuss");
}
void pop()
{
if(top==NULL)
printf("\n stack is empty");
else
{
struct node *temp=top;
printf("\n Deleted element : %d",temp->data);
top=temp->next;
free(temp);
}
}
void disp()
{
if(top==NULL)
printf("\n Stack is empty");
else
{
struct node *temp=top;
while(temp!=NULL)
{
printf("\n -> %d",temp->data);
temp=temp->next;
}
}
}