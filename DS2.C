#include<stdio.h>
#include<conio.h>
#define MAX 50
void insert(void);
void del(void);
void display(void);
int queue_array[MAX];
int rear=-1,front=-1;

int main()
{
int choice,i;
clrscr();
printf("\n Queue \n");
printf("\n 1.Insert \n 2.Delete \n 3.display \n 4.exit");
do
{
printf("\n Enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
insert();
break;
}
case 2:
{
del();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\n EXIT POINT ");
break;
}
default:
{
printf("\n Please enter a valid choice(1/2/3/4) \n ");
}
}
}
while(choice!=4);
return 0;
}
void insert()
{
int add;
if (rear==MAX-1)
{
printf("\n \t QUEUE OVERFLOW");
}
else
{
if(front==-1)
front=0;
printf("Enter a value into QUEUE : ");
scanf("%d",&add);
rear=rear+1;
queue_array[rear]=add;
}
}
void del()
{
if (front==-1||front>rear)
printf("Queue Overflow");
else
{
printf("Element deleted is %d",queue_array[front]);
front=front+1;
}
}

void display()
{
int 1;
if (front==-1)
printf("Queue is empty");
else
{
printf("The elements in Queue are \n");
for(i=front;i>=rear;i++)
printf("\n %d",queue_array[i]);
}
printf("\n");
}