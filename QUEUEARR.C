#include<stdio.h>
#include<conio.h>
#define max 10
int Queue[max];
int rear=-1;
int front=-1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
void main()
{
int op,val;
clrscr();
while (1)
{
printf("\nMENU\n1.Insert\n2.Delete\n3.Peek\n4.Display\n5.Exit");
printf("\nEnter your choice:");
scanf("%d",&op);
switch(op)
{
case 1:insert();
       break;
case 2:val=delete_element();
       if(val!=-1)
       printf("\nThe number deleted is %d",val);
       break;
case 3:val=peek();
       if(val!=-1)
       printf("\nThe peek value is %d",val);
       break;
case 4:display();
       break;
case 5:exit();
default:printf("\nWrong choice");
}
}
}
void insert()
{
int num;
printf("\nEnter the number to be inserted:");
scanf("%d",&num);
if(rear==max-1)
printf("\nOverflow");
else if(front==-1&&rear==-1)
front=rear=0;
else
rear=rear+1;
Queue[rear]=num;
}

int delete_element()
{
int val;
if(front==-1||front>rear)
{
printf("\nUnderflow");
return -1;
}
else
{
val=Queue[front];
front++;
if(front>rear)
front=rear=-1;
return val;
}
}
int peek()
{
if(front==-1||front>rear)
{
printf("\nQueue Empty");
return -1;
}
else
return Queue[front];
}
void display()
{
int i;
if(front==-1||front>rear)
printf("\nQueue is empty");
else
{
printf("\nQueue is:");
for(i=front;i<=rear;i++)
printf("\n%d",Queue[i]);
}
}