#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *ptr;
}
*front,*rear,*tmp,*front1;
int frontelement();
void enq(int data);
void deq();
void display();
void create();
void queuesize();
int count=0;
void main()
{
int no,ch,e;
clrscr();
printf("1.ENQUEUE\n");
printf("2.DEQUEUE\n");
printf("3.FRONTELEMENT\n");
printf("4.DISPLAY\n");
printf("5.QUEUESIZE\n");
printf("6.EXIT\n");
create();
while(1)
{
printf("Enter your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter data:\n");
	 scanf("%d",&no);
	enq(no);
	break;
case 2:  deq();
	 break;
case 3:e=frontelement();
      if(e!=0)
      printf("Frontelement :%d\n",e);
      else
      printf("Queue is empty\n");
      break;
 case 4:display();
	break;
case 5:queuesize();
      break;
case 6:exit(0);
default:printf("Wrong choice.\n");
break;
}}}
void create()
{
front=rear=NULL;
}
void queuesize()
{
printf("\n Queuesize is:%d\n",count);
}
void enq(int data)
{
if(rear==NULL)
{
rear=(struct node*)malloc(sizeof(struct node));
rear->ptr=NULL;
rear->info=data;
front=rear;
}
else
{
tmp=(struct node*)malloc(sizeof(struct node));
rear->ptr=tmp;
tmp->info=data;
tmp->ptr=NULL;
rear=tmp;
}
count++;
}
void display()
{
front1=front;
if((front1==NULL)&&(rear==NULL))
{
printf("Queue empty\n");
return;
}
while(front1!=rear)
{
printf("%d",front1->info);
front1=front1->ptr;
}
if(front1==rear)
printf("%d\n",front1->info);
}
void deq()
{
front1=front;
if(front1==NULL)
{
printf("Empty queue\n");
return;
}
else
{
if(front1->ptr!=NULL)
{
front1=front1->ptr;
printf("Dequeue value is:%d\n",front->info);
free(front);
front=front1;
}
else
{
printf("Dequeued value is:%d\n",front->info);
free(front);
front=NULL;
rear=NULL;
}
count--;
}
}
int frontelement()
{
if((front!=NULL)&&(rear!=NULL ))
return front->info;
else
return 0;
}
