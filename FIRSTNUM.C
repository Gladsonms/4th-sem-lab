#include<stdio.h>
#include<conio.h>
int main ()
{
int n,i=3,count,c;
clrscr();
printf("Enter the number of prime number requires \n");
scanf("%d",&n);
if(n>=1)
{
printf("First %d prime number are:\n",n);
printf("2\n");
}
for(count=2;count<=n;i++)
{
for(c=2;c<i;c++)
{
if(i%c==0)
break;
}
if(c==i)
{
printf("%d \n",i);
count++;
}
}
getch();
return 0;
}
