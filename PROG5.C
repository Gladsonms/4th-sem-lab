#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,n;
clrscr();
printf("Input upto the table number starting from 1;");
scanf("%d",&n);
printf("Multiplication table from 1 to %d \n",n);
for(i=1;i<=10;i++)
{
for(j=1;j<=n;j++)
{
if(j<=n-1)
printf("%d*%d=%d",j,i,i*j);
else
printf("%d*%d=%d",j,i,i*j);
getch();
}
print("\n");
}
}