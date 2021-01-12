#include<stdio.h>
#include<conio.h>
void main()
{
int A[10],i,j,swap,pos,n;
clrscr();
printf("enter the no.of elements:");
scanf("%d",&n);
printf("enter %d elements:",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
for(i=0;i<(n);i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(A[pos]>A[j])
pos=j;
}
if(pos!=i)
{
swap=A[i];
A[i]=A[pos];
A[pos]=swap;
}
}
printf("sorted list in ascending order");
for(i=0;i<n;i++)
printf("\t%d",A[i]);
getch();
}