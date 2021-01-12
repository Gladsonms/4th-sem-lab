#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
struct node *prev;
int info;
struct node *next;
}*start;
void main()
{
int choice,n,m,po,i;
clrscr();
start = NULL;
while(1)
{
printf("1.create list\n2.add at begining\n3.add after\n4.delete\n5.display\n6.count\n7.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("how many nodes you want:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the element:");
scanf("%d",&m);
create_list(m);
}
break;
case 2:
printf("enter the element:");
scanf("%d",&m);
addatbeg(m);

break;
case 3:
printf("enter the element:");
scanf("%d",&m);
printf("enter the postion after the element is inserted:");
scanf("%d",&po);
addafter(m,po);
break;
case 4:
printf("enter the element for deletion:");
scanf("%d",&m);
del(m);
break;
case 5:
display();
break;
case 6:
count();
break;
case 7:
exit();
default:printf("wrong choice\n");
}}}
create_list(int num)
{
struct node *q,*tmp;
tmp=malloc(sizeof(struct node)) ;
tmp->info=num;
tmp->next=NULL;
if(start==NULL)
{
tmp->prev=NULL;
start->prev=tmp;
start=tmp;
}
else
{
q=start;
while(q->next!=NULL)
q=q->next;
q->next=tmp;
tmp->prev=q;
}}
addatbeg(int num)
{
struct node *tmp;
tmp=malloc(sizeof(struct node));
tmp->prev=NULL ;
tmp->info=num;
tmp->next=start;
start->prev=tmp;
start=tmp;
}
addafter(int num,int c)
{
struct node *q,*tmp;
int i;
q=start;
for(i=0;i<c-1;i++)
{
q=q->next;
if(q==NULL)
{
printf("these are less than %d elements\n",c);
return;
}}
tmp=malloc(sizeof(struct node));
tmp->info=num;
q->next->prev=tmp;
tmp->next=q->next;
tmp->prev=q;
q->next=tmp;
}
del(int num)
{
struct node *tmp,*q;
if(start->info==num)
{
tmp=start;
start=start->next;
start->prev=NULL;
free(tmp);
return;
}
q=start;
while(q->next->next!=NULL)
{
if(q->next->info==num)
{
tmp=q->next;
q->next=tmp->next;
tmp->next->prev=q;
free(tmp);
return;
}
q=q->next;
}
if(q->next->info==num)
{
tmp=q->next;
free(tmp);
q->next=NULL;
return;
}
printf("element %d not found\n",num);
}
display()
{
struct node *q;
if(start==NULL)
{
printf("list is empty.\n");
return;
}
q=start;
printf("list is:\n\t");
while(q!=NULL)
{
printf("%d",q->info);
q=q->next;
}
printf("\n");
}
count()
{
struct node *q=start;
int count=0;
while(q!=NULL)
{
q=q->next;
count++;
}
printf("number of elements are %d\n",count);
}
