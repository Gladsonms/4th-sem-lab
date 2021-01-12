#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
int factorial=1;
clrscr();
printf("enter an integer:");
scanf("%d",&n);
if(n<0)
printf("error!factorial of a negative number doesn't must");
else
{
for(i=1;i<=n;++i)
{
factorial*=i;
}
printf("factorial of %d=%d",n,factorial);
}
getch();

}
