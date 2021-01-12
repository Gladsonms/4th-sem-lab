#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,n,flag=0;
clrscr();
printf("\n\t\t to find elments in the array are unique or not");
printf("\n enter the size of the array :");
scanf("%d",&n);
printf("\n enter the elements into the array :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j]&&i!=j)
{
flag=1;
printf("\n duplicate value found");
}
}
}
if(flag==0)
printf("the values are unique");
getch();
}




