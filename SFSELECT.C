#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,swap,pos,n;
clrscr();
printf("\n Enter the number of elements:");
scanf("%d",&n);
printf("\nEnter %d elements:",n);
for(i=0;i<n;i++)
scanf("\n%d",&a[i]);
for(i=0;i<(n-1);i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(a[pos]>a[j])
pos=j;
}
if(pos!=i)
{
swap=a[i];
a[i]=a[pos];
a[pos]=swap ;
}}
printf("\n Sorted list in ascending order :");
for(i=0;i<n;i++)
printf("\n %d",a[i]);
getch();
}