#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
unsigned long factorial=1;
clrscr();
printf("Enter an integer: ");
scanf("%d",&n);
if(n<0)
{
 printf("Error! Factorial of negative numbers doesn,t exist");
}
else
{
for(i=1;i<=n;++i)
  {
  factorial*=i;
  }
  {
  printf("Factorial of %d=%u",n,factorial);
  }
  }
  getch();
return 0;
}
