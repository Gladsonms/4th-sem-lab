#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *ptr;
}*top,*top1,*temp;
int topelement();
void push(int data);
void pop();
void display();
void create();
void main()
{
int no,ch,e;
clrscr();
printf("\n \n \t \t STACK USING LINKED LIST");
printf("\n1-Push\n2-Pop\n3-Top\n4-Display\n5-Exit");
create();
while (1)
{
printf("\nEnter choice:");
scanf("%d",&ch);
switch (ch)
{
case 1:printf("Enter data:");
       scanf("%d",&no);
       push(no);
       break;
case 2:pop();
       break;
case 3:if(top==NULL)
       printf("No elements in stack");
       else
       {
       e=topelement();
       printf("\nTop element : %d", e);
       }
       break;
case 4:display();
       break;
case 5:exit(0);
default:printf("\nWrong choice, Please enter correct choice ");
	break;
}
}
}
void create()
{
top=NULL;
}
void push(int data)
{
if(top==NULL)
{
top=(struct node *)malloc(sizeof(struct node));
top->ptr=NULL;
top->info=data;
}
else
{
temp=(struct node *)malloc(sizeof(struct node));
temp->ptr=top;
temp->info=data;
top=temp;
}
}
void display()
{
top1=top;
if (top1==NULL)
{
printf("Stack is empty");
return;
}
while (top1!=NULL)
{
printf("%d \t",top1->info);
top1=top1->ptr;
}
}
void pop()
{
top1=top;
if (top1==NULL)
{
printf("\nEmpty stack");
return;
}
else
top1=top1->ptr;
printf("\nPopped value is:%d",top->info);
free(top);
top=top1;
}
int topelement()
{
return(top->info);
}
