#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node
{
int info;
struct node *prev,*next;
}*start;
main()
{
int ch,m,n,pos,i;
start=NULL;
clrscr();
printf("\n\t\t\t DOUBLE LINKED LIST");
while(1)
{
printf("\n1.Create list\n2.Add at begining\n3.Add after\n4.Delete\n5.Display\n6.Count\n7.Reverse\n8.Quit");
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
case 4:printf("\nEnter the element to be deleted:");
       scanf("%d",&m);
       del(m);
       break;
case 5:display();
       break;
case 6:count();
       break;
case 7:rev();
       break;
case 8:exit();
default:printf("\n...Wrong Choice...\n");
}
}
}
create_list(int num)
{
struct node *q,*temp;
temp=malloc(sizeof(struct node));
temp->info=num;
temp->next=NULL;
if(start==NULL)
{
temp->prev=NULL;
start->prev=temp;
start=temp;
}
else
{
q=start;
while(q->next!=NULL)
q=q->next;
q->next=temp;
temp->prev=q;
}
}
addatbeg(int num)
{
struct node *temp;
temp=malloc(sizeof(struct node));
temp->prev=NULL;
temp->info=num;
temp->next=start;
start->prev=temp;
start=temp;
}
addafter(int num,int c)
{
struct node *temp,*q;
int i;
q=start;
for(i=0;i<c-1;i++)
{
q=q->next;
if(q==NULL)
{
printf("\nThere are less than %d elements",c);
return;
}
}
temp=malloc(sizeof(struct node));
temp->info=num;
q->next->prev=temp;
temp->next=q->next;
temp->prev=q;
q->next=temp;
}
del(int num)
{
struct node *temp,*q;
if(start->info==num)
{
temp=start;
start=start->next;
start->prev=NULL;
free(temp);
return;
}
q=start;
while(q->next->next!=NULL)
{
if(q->next->info==num)
{
temp=q->next;
q->next=temp->next;
temp->next->prev=q;
free(temp);
return;
}
q=q->next;
}
if(q->next->info==num)
{
temp=q->next;
free(temp);
q->next=NULL;
return;
}
printf("\nElement %d not found",num);
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
printf("\nList is:\n");
while(q!=NULL)
{
printf("%d\n",q->info);
q=q->next;
}
printf("\n");
}
count()
{
struct node *q=start;
int c=0;
while(q!=NULL)
{
q=q->next;
c++;
}
printf("\nNumber of elements are: %d",c);
}
rev()
{
struct node *p1,*p2;
p1=start;
p2=p1->next;
p1->next=NULL;
p1->prev=p2;
while(p2!=NULL)
{
p2->prev=p2->next;
p2->next=p1;
p1=p2;
p2=p2->prev;
}
start=p1;
}