#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
} *front=NULL,*rear=NULL;
void insert(int);
void delet();
void disp();
void main()
{
int ch,value;
clrscr();
printf("\n QUEUE USING LINKED LIST");
while(1)
{
printf("\n MENU");
printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\n Enter the value to be inserted :");
	scanf("%d",&value);
	insert(value);
	break;
case 2: delet();
	break;
case 3: disp();
	break;
case 4: exit(0);
default: printf("\n Wrong selection");
}
}
}
void insert(int v)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=v;
newnode->next=NULL;
if(front==NULL)
front=rear=newnode;
else
{
rear->next=newnode;
rear=newnode;
}
printf("\n inserton is success");
}
void delet()
{
if(front==NULL)
printf("\n queue is empty");
else
{
struct node *temp=front;
front=front->next;
printf("\n Deleted element : %d",temp->data);
free(temp);
}
}
void disp()
{
if(front==NULL)
printf("\n queue is empty");
else
{
struct node *temp=front;
while(temp!=NULL)
{
printf("\n -> %d",temp->data);
temp=temp->next;
}
}
}