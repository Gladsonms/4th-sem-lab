#include<stdio.h>
#include<conio.h>
void main()
{
int row,space,coef=1,i,j;
clrscr();
printf("\n enter the number of rows");
scanf("%d",&row);
for(i=0;i<row;i++)
{
for(space=1;space<=row-i;space++)
printf(" ");
for(j=0;j<=i;j++)
{
if(j==0||i==0)
coef=1;
else
coef=coef*(i-j+1)/j;
printf("%d ",coef);
}
printf("\n");
}
getch();
}
