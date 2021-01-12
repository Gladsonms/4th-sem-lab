#include<stdio.h>
#include<conio.h>
int front=-1;
int rear=-1;
int a[100];
void insertion();
void deletion();
void display();
int s;
void main()
{
int choice;
clrscr();
printf("\n \t\t\tQueue\n");
printf("\t\t\t***** \n\n\n");
printf("\n Enter the size of the queue : ");
scanf("%d",&s);
do
{
printf("\nMenu\n");
printf("-----\n\n");
printf(" 1.insertion \n 2.Deletion \n 3.Display \n 4.Exit");
printf("\n Enter your choice  : ");
scanf("%d",&choice);
switch(choice)
{
case 1: insertion();
	break;
case 2: deletion();
	break;
case 3: display();
	break;
case 4: return;
default:printf("Enter a valid choice");
}
}
while(1);
}
void insertion()
{
int temp;
if(rear>s-1)
printf("\n Queue overflow");
else
{
printf("\n enter the value to be inserted in the queue : ");
scanf("%d",&temp);
rear++;
a[rear]=temp;
if(rear==0)
{
front++;
printf("front value : %d ",a[front]);
}
else
printf("front value: %d",a[front]);
}
}
void deletion()
{
int temp;
if(rear<front)
printf("\n Queue Underflow");
else
{
temp=a[front];
front++;
printf("the deleted element is %d",temp);
}
}
void display()
{
int i;
if(front>rear)
printf("Queue is empty");
else
{
printf("Elements in the queue : \n");
for(i=front;i<=rear;i++)
{
printf("\n%d",a[i]);
}
}
}