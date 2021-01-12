
#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,j,temp;
clrscr();
printf("\t\t\LINEAR SORT");
printf("\nEnter number of elements: ");
scanf("%d",&n);
printf("\nEnter array elements: ");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
 }
}
 printf("\nSorted array is: ");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 getch();
}