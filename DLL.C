#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node
{
int info;
struct node *link;
}*start;
void main()
{
int ch,m,n,pos,i;
start=NULL;
clrscr();
while(1)
{
printf("\n1.Create list\n2.Add at beginning\n3.Add after\n4.Delete\n5.Display\n6.Quit");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\nHow many nodes you want:");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
       printf("\nEnter the elements:");
       scanf("%d",&m);
       create_list(m);
       }
       break;
case 2:printf("\nEnter the element:");
       scanf("%d",&m);
       addatbeg(m);
       break;
case 3:printf("\nEnter the elements:");
       scanf("%d",&m);
       printf("\nEnter the position after which this element is inserted:");
       scanf("%d",&pos);
       addafter(m,pos);
       break;
case 4:if(start==NULL)
       {
	printf("\nList is empty");
	continue;
       }
       printf("\nEnter the element to be deleted:");
       scanf("%d",&m);
       del(m);
       break;
case 5:display();
       break;
case 6:exit();
default:printf("\n...Invalid Choice...\n");
	break;
}
}
}
create_list(int data)
{
struct node *q,*tmp;
tmp=malloc(sizeof(struct node));
tmp->info=data;
tmp->link=NULL;
if(start==NULL)
start=tmp;
else
{
q=start;
while(q->link!=NULL)
q=q->link;
q->link=tmp;
}
return;
}
addatbeg(int data)
{
struct node *tmp;
tmp=malloc(sizeof(struct node));
tmp->info=data;
tmp->link=start;
start=tmp;
return;
}
addafter(int data,int pos)
{
struct node *tmp,*q;
int i;
q=start;
for(i=0;i<pos-1;i++)
{
q=q->link;
if(q==NULL)
{
printf("\nThere are less than %d elements",pos);
return;
}
}
tmp=malloc(sizeof(struct node));
tmp->link=q->link;
tmp->info=data;
q->link=tmp;
return;
}
del(int data)
{
struct node *tmp,*q;
if(start->info==data)
{
tmp=start;
start=start->link;
free(tmp);
return;
}
q=start;
while(q->link->link!=NULL)
{
if(q->link->info==data)
{
tmp=q->link;
q->link=tmp->link;
free(tmp);
return;
}
q=q->link;
}
if(q->link->info==data)
{
tmp=q->link;
free(tmp);
q->link=NULL;
return;
}
printf("\nElement %d not found\n",data);
return;
}
display()
{
struct node *q;
if(start==NULL)
{
 printf("\nList is EMPTY");
 return;
}
q=start;
printf("\nList is\n");
while(q!=NULL)
{
printf("%d\n",q->info);
q=q->link;
}
printf("\n");
return;
}
count()
{
struct node *q=start;
int cnt=0;
while(q!=NULL)
{
q=q->link;
cnt++;
}
printf("NO.of elements are %d \n",cnt);
return;
}