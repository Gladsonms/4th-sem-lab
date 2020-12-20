#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,rows=3,cols=3;
clrscr();
printf("Upper triangle forms like \n");
for(i=0;i<rows;i++)
{
for (j=0;j<cols;j++)
{
if (i<j || i==j)
{
printf("1");
}
else
printf("0");
printf(" ");
}
printf("\n");
}
printf("Lower Triangle forms like \n");
for(i=0;i<rows;i++)
{
for (j=0;j<cols;j++)
{
if (i>j || i==j)
{
printf("-1");
}
else
printf("0");
printf(" ");
}
printf("\n");
}
printf("Triangle with diagonal elements 'zero \n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
if(i==j)
{
printf("0");
}
else
printf("1");
printf(" ");
}
printf("\n");
}
getch();
}