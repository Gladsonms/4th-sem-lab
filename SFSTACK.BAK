#include<stdio.h>
#include<conio.h>
int stack[100],c,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void main()
{
top=-1;
clrscr();
printf("Enter the size of stack[max=100]:");
scanf("%d",&n);
printf("\n\t STACK OPERATIONS USING ARRAY.");
printf("\n\t......................");
printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT");
do
{
printf("\nEnter the choice:");
scanf("%d",&c);
switch(c)
{
case1:
{
push();
break;
}
case2:
{
pop();
break;
}
case3:
{
display();
break;
}
case4:
{
printf("\n \t exit point.");
break;
}
default:
 {
 printf("\n\tPlease enter a valid choice(1,2,3,4)");
 }
 }
 }
 while(c!=4);
 getch();
 }
 void push()
 {
 if(top>=n-1)
 {
 printf("\n STACK OVERFLOW.");
 }
 else
 {
 printf("Enter the value to be pushed:");
 scanf("%d",&x);
 top++;
 stack[top]=x;
 }
 }
 void pop()
 {
 if(top<=-1)
 {
 printf("\n STACK UNDERFLOW.");
 }
 else
 {
 printf("\n The popped element is %d",stack[top]);
 top--;
 }
 }
void dislpay()
 {
 if(top>=0)
 {
 printf("\n The element in stack\n");
 for(i=top;i>=0;i--)
 printf("\n%d",stack[i]);
 printf("\n Press NEXT CHOICE");
 }
 else
 {
 printf("\n The stack is empty");
 }
 }

