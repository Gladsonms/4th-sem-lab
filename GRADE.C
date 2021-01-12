//Calculator program

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,choice,c;
clrscr();
printf("1.Add\n");
printf("2.Subtract\n");
printf("3.Multiply\n");
printf("4.Divison\n");
printf("Enter your choice: ");
scanf("%d",&choice);
printf("Enter the values: ");
scanf("%d",&a);
printf("Next value: ");
scanf("%d",&b);
switch(choice)
{
case 1:
c=a+b;
printf("Answer is:%d",c);
break;
case 2:
c=a-b;
printf("Answer is:%d",c);
break;
case 3:
c=a*b;
printf("Answer is: %d",c);
break;
case 4:
c=a/b;
printf("Answer is:%d",c);
break;
default:
printf("Invalid choice");
}
getch();
}