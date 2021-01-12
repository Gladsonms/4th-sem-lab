#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node
{
int info;
struct node *link;
}*last;
main()
{
int ch,m,n,pos,i;
last=NULL;
clrscr();
while(1)
{
printf("\n \t \t \t CIRCULAR LINKED LIST");
printf("\n \t \t \txxxxxxxxxxxxxxxxxxxxxx");
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
case 4:if(last==NULL)
       {
	printf("\nList Underflow");
	continue;
       }
       else
       printf("\nEnter the element to be deleted:");
       scanf("%d",&m);
       del(m);
       break;
case 5:display();
       break;
case 6:exit();
default:printf("\n...Wrong Choice...\n");
}
}
}
create_list(int num)
{
struct node *q,*temp;
temp=malloc(sizeof(struct node));
temp->info=num;
if(last==NULL)
{
last=temp;
temp->link=last;
}
else
{
temp->link=last->link;
last->link=temp;
last=temp;
}
return;
}
addatbeg(int num)
{
struct node *temp;
temp=malloc(sizeof(struct node));
temp->info=num;
temp->link=last->link;
last->link=temp;
return;
}
addafter(int num,int pos)
{
struct node *temp,*q;
int i;
q=last->link;
for(i=0;i<pos-1;i++)
{
q=q->link;
if(q==last->link)
{
printf("\nThere are less than %d elements",pos);
return;
}
}
temp=malloc(sizeof(struct node));
temp->link=q->link;
temp->info=num;
q->link=temp;
if(q==last)
last=temp;
return;
}
del(int num)
{
struct node *temp,*q;
if(last->link==last&&last->info==num)
{
temp=last;
last=NULL;
free(temp);
return;
}
q=last->link;
if(q->info==num)
{
temp=q;
last->link=q->link;
free(temp);
return;
}
while(q->link!=last)
{
if(q->link->info==num)
{
temp=q->link;
q->link=last->link;
free(temp);
printf("\n%d deleted",num);
return;
}
q=q->link;
}
if(q->link->info==num)
{
temp=q->link;
q->link=last->link;
free(temp);
last=q;
return;
}
printf("\nElement %d not found\n",num)
;
return;
}
display()
{
struct node *q;
if(last==NULL)
{
printf("\nList is EMPTY");
return;
}
q=last->link;
printf("\nList is:\n");
while(q!=last)
{
printf("%d\n",q->info);
q=q->link;
}
printf("%d\n",last->info);
return;
}





