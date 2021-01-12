#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *ptr;
}*front,*rear,*temp,*front1;
int frontelement();
void enq(int data);
void deq();
void display();
void create();
void queuesize();
int count = 0;
void main()
{
int no,ch,e;
clrscr();
printf("\n1.Enque\n2.Deque\n3.Front element\n4.Display\n5.Queue size\n6.Exit");
create();
while (1)
{
printf("\nEnter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter data:");
       scanf("%d",&no);
       enq(no);
       break;
case 2:deq();
       break;
case 3:e=frontelement();
       if(e!=0)
       printf("\nFront element:%d",e);
       else
       printf("\nQueue is empty");
       break;
case 4:display();
       break;
case 5:queuesize();
       break;
case 6:exit(0);
default:printf("Wrong choice");
}
}
}
void create()
{
front=rear=NULL;
}
void queuesize()
{
printf("\nQueue size:%d",count);
}
void enq(int data)
{
if(rear==NULL)
{
 rear=(struct node *)malloc(sizeof(struct node));
 rear->ptr=NULL;
 rear->info=data;
 front=rear;
}
else
{
 temp=(struct node *)malloc(sizeof(struct node));
 rear->ptr=temp;
 temp->info=data;
 temp->ptr=NULL;
 rear = temp;
}
count++;
}
void display()
{
front1=front;
if((front1==NULL)&&(rear==NULL))
{
 printf("Queue empty");
 return;
}
while(front1!=rear)
{
printf("%d",front1->info);
front1=front1->ptr;
}
if(front1==rear)
printf("%d",front1->info);
}
void deq()
{
front1=front;
if(front1==NULL)
{
printf("\nEmpty queue");
return;
}
else
{
if(front1->ptr!=NULL)
{
front1=front1->ptr;
printf("\nDequed value is:%d",front->info);
free(front);
front=front1;
}
else
{
printf("\nDequed value is:%d",front->info);
free(front);
front = NULL;
rear = NULL;
}
count--;
}
}
int frontelement()
{
if((front!=NULL)&&(rear!=NULL))
return(front->info);
else
return 0;
}

