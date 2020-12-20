#include<stdio.h>
#include<conio.h>

void main()
{
int n,pos,a[50],i,k,flag=0;
clrscr();
printf("\n Searchind an element of the array \n");
printf("\n Enter the size of the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("The element %d is :",i);
scanf("%d",&a[i]);
}
printf("Enter element to be found:");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("The element %d is found in %d \n",k,i);
flag=1;
}
}
if(flag==0)
{
printf("\n Element not found in array:");
}
getch();
}