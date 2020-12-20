#include<stdio.h>
#include<conio.h>

void main()
{
int n,pos,a[50],i;
clrscr();
printf("\n Deleting element of an array \n");
printf("\n Enter the size of the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("The element %d is :",i);
scanf("%d",&a[i]);
}
printf("Enter position of element to be deleted:");
scanf("%d",&pos);
for(i=pos;i<n-1;i++)
{
a[i]=a[i+1];
}
n--;
printf("The new array is: \n");
for(i=0;i<n;i++)
{
printf("\t %d",a[i]);
}
getch();
}