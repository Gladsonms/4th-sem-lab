#include<stdio.h>
#include<conio.h>
int top=-1;
int s;
int a[100];
void pop();
void push();
void disp();
void main()
{
int choice;
clrscr();
printf("\t\t------STACK-----\n\n");
printf("enter the size");
scanf("%d",&s);
do
{
printf("\n\n menu \n1.Push \n2.Pop \n3.Display \n4.Exit");
printf("\n choice");
scanf("%d",&choice);
switch(choice)
{
case 1: push();
	break;
case 2: pop();
	break;
case 3: disp();
	break;
case 4: return;
default:printf("Invalid choice");
}
}
while(1);
}
void push()
{
int temp;
if(top>s-1)
{
printf("\n Overflow");
}
else
{
printf("elment to be pushed");
scanf("%d",&temp);
top++;
printf("\n the value pushed is %d",temp);
a[top]=temp;
}
}
void pop()
{
int temp;
if(top==-1)
{
printf("\n Underflow");
}
else
{
temp=a[top];
top--;
printf("\n the value popped is %d",temp);
}
}
void disp()
{
int i;
if(top==-1)
printf("\n no elements \n");
else
{
for(i=0;i<=top;i++)
printf("\n %d \n",a[i]);
}
}

