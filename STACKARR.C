#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void main()
{
top=-1;
clrscr();
printf("\nEnter the size of STACK[Max=100]:");
scanf("%d",&n);
printf("\n\STACK OPERATIONS USING ARRAY");
printf("\n\--------------------------------");
printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
do
{
printf("\nEnter the Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\nEXIT POINT ");
break;
}
default:
{
printf("\nPlease Enter a Valid Choice(1/2/3/4)");
}
}
}
while(choice!=4);
getch();
}
void push()
{
if(top>=n-1)
{
printf("\nSTACK Overflow");
}
else
{
printf("\nEnter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\nStack Underflow");
}
else
{
printf("\nThe popped element is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\nThe elements in STACK \n");
for(i=top;i>=0;i--)
printf("%d",stack[i]);
printf("\nPress Next Choice");
}
else
{
printf("\nThe STACK is empty");
}
}