#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int info;
struct node *link;
}
*last;
main()
{
int choice,n,m,po,i;
clrscr();
last=NULL;
while(1)
{
printf("1.create list\n");
printf("2.add at begining\n");
printf("3.add after\n");
printf("4.delete\n");
printf("5.display\n");
printf("6.quit\n");
printf("enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("how many nodes you want:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the element:\n");
scanf("%d",&m);
create_list(m);
}
break;
case 2:
printf("enter the element:\n");
scanf("%d",&m);
addatbeg(m);
break;
case 3:
printf("enter the element:\n");
scanf("%d",&m);
printf("enter the position after which this element is inserted:");
scanf("%d",&po);
addafter(m,po);
break;
case 4:
if(last==NULL)
{
printf("list underflow\n");
continue;
}
printf("enter the number for deletion:");
scanf("%d",&m);
del(m);
break;
case 5:
display();
break;
case 6:exit();
default:
printf("wrong choice\n");
}
}
}
create_list(int num)
{
struct node *q,*tmp;
tmp=malloc(sizeof(struct node));
tmp->info=num;
if(last==NULL)
{
last=tmp;
tmp->link=last;
}
else
{
tmp->link=last->link;
last->link=tmp;
last=tmp;
}           return;}
addatbeg(int num)
{
struct node *tmp;
tmp=malloc(sizeof(struct node));
tmp->info=num;
tmp->link=last->link;
last->link=tmp;
return;
}
addafter(int num,int pos)
{
struct node *tmp,*q;
int i;
q=last->link;
for(i=0;i<pos-1;i++)
{
q=q->link;
if(q==last->link)
{
printf("there  are less than %d elements\n",pos);
return;
}
}
tmp=malloc(sizeof(struct node));
tmp->link=q->link;
tmp->info=num;
q->link=tmp;
if(q==last)
last=tmp;          return;
}
del(int num)
{
struct node *tmp ,*q;
if(last->link==last&&last->info==num )
{
tmp=last;
last=NULL;
free(tmp);
return;
}
q=last->link;
if(q->info==num)
{
tmp=q;
last->link=q->link;
free(tmp);
return;
}
while(q->link!=last)
{
if(q->link->info==num)
{
tmp=q->link;
q->link=tmp->link;
free(tmp);
printf("%d deleted\n",num);
return;
}
q=q->link;
}
if(q->link->info==num)
{
tmp=q->link;
q->link=last->link;
free(tmp);
last=q;
return;
}
printf("element %d not found\n",num);   return;
}
display()
{
struct node *q;
if (last==NULL)
{
printf("list is empty\n");
return;
}
q=last->link;
printf("list is:\n");
while(q!=last)
{
printf("%d",q->info);
q=q->link;
}
printf("%d\n",last->info);
return;
}
