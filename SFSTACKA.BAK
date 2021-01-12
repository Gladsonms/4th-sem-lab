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
 printf("\n Enter the size of stack[max=100]:");
 scanf("%d",&n);
 printf("\n\tSTACK OPERATIONS USING ARRAY");
 printf("\n\t..............................");
 printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT");
 do
 {
 printf("\n enter your choice:");
 scanf("%d",&c);
 switch(c)
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
  printf("\n\texit point") ;
  break;
  }
  default:
  {
  printf("\n\tENTER A VALID CHOICE(1,2,3,4)");
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
  printf("\nSTACK OVERFLOW");
  }
  else
  {
  printf("Enter a value to be pushed:");
  scanf("%d",&x);
  top++;
  stack[top]=x;
  }
 }
 void pop()
 {
 if(top<=-1)
 {
 printf("\n STACK UNDERLOW");
 }
 else
 {
 printf("\nPopped elements is %d",stack[top]);
 top--;
 }
  }
 void display()
 {
if (top>=0)
 {
  printf("Elements in stack\n");
  for(i=top;i>=0;i--)
  printf("\n%d",stack[i]);
  printf("\n press next choice");
  }
  else
  printf("Stack is empty!");
  }

