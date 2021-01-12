#include<stdio.h>
#include<conio.h>
int rear=-1;
int front=-1;
int x,a[100],q;
void insert();
void delet();
void disp();
void main()
 {
 int choice;
 clrscr();
 printf("\n ENTER THE SIZE OF QUEUE:");
 scanf("%d",&q);
 do
 {
 printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
 printf("Enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  insert();
  break;
  case 2:
  delet();
  break;
  case 3:
  disp();
  break;
  case 4:
  return;
  default:
  printf("ENTER A VALID CHOICE");
  }
 }
  while(1);
 }
 void insert()
 {
  if(rear>q-1)
  printf("OVERFLOW");
  else
  {
  printf("Enter a value to be Inserted:");
  scanf("%d",&x);
  rear++;
  a[rear]=x;
  }
  }
  void delet()
 {
 if(front<=-1)
 printf("UNDERLOW");
 else
 {
 printf("Deleted elements is %d",a[front]);
 front++;
 }
 }
 void disp()
 {
 int i;
 if(rear>=0)
 {
  printf("Elements in Queue\n");
  for(i=rear;i>=0;i--)
  printf("\n%d",a[i]);
  }
  else
  printf("Queue is empty!");
  }

