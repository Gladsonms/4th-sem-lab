#include<stdio.h>
#include<conio.h>
#define Max 10
int q[Max];
int f=-1,r=-1;
void insert();
int del(void);
int peek(void);
void display();
void main()
{
int op,val;
clrscr();
do
{
printf("\n***MENU***");
printf("\n1.insertion\n2.deletion\n3.peek\n4.display\n5.exit");
printf("\n enetr your option:");
scanf("%d",&op);
switch(op)
{
case 1:insert();
break;
case 2:val=del();
if(val!=-1)
printf("\n the number deleted is %d",val);
break;
case 3:val=peek();
if(val!=-1)
printf("\n the firsst inqueue is %d",val);
case 4:display();
break;
case 5:exit();
default:printf("\n wrong choice");
}
}
while(op!=5);
getch();
}
void insert()
{
int num;
printf("\n enter the number to be inserted:");
scanf("%d",&num);
if(f==0&&r==Max-1)
printf("\n OVERFLOW");
else if(f==-1&&r==-1)
{
f=r=0;
q[r]=num;
}
else if(r==Max-1 && f!=0)
{
r=0;
q[r]=num;
}
else
{
r++;
q[r]=num;
}
}
int del()
{
int val;
if(f==-1&&r==-1)
{
printf("\n OVERFLOW");
return -1;
}
val=q[f];
if(f==r)
f=r=-1;
else
{
if(f==Max-1)
f=0;
else
f++;
}
return val;
}
int peek()
{
if(f==-1&&r==-1)
{
printf("\n q is empty");
return -1;
}
else

return q[f];
}
void display()
{
int i;
printf("\n");
if(f==-1&&r==-1)
printf("\n queue is empty");
else
{
if(f<r)
{
for(i=f;i<=r;i++)
printf("\t %d",q[i]);
}
else
{
for(i=f;i<=Max;i++)
printf("\t%d",q[i]);
for(i=f;i<=r;i++)
printf("\t %d",q[i]);
}
}
}
