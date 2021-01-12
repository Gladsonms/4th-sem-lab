#include<stdio.h>
#include<conio.h>
void main ()
{
int a,i,p=1;
float s=0,c=1,temp=1,x;
clrscr();
printf("Enter the angle in degrees \n");
scanf("%d",&a);
x=a*3.14/180;
for(i=1;temp>=0.0001;i++)
{
temp=temp*x/i;
s=s+temp*p;
i++;
p=-p;
temp=