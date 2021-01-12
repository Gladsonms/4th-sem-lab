#include<stdio.h>
#include<conio.h>


void main()
{

int a[100],i,n,first=0,mid,last,search;
clrscr();

printf("\t\t\tBINARY SEARCH");
printf("\nEnter the no elements:");
scanf("%d",&n);
printf("\nEnter %d integer:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the value to find:");
scanf("%d",&search);
first=0;
last=n-1;
mid=(first+last)/2;

while(first<=last)
{
if(a[mid]<search)
first=mid+1;
else if(a[mid]==search)
{
printf("%d found at location : %d\n",search,mid+1);
break;
}
else
last=mid-1;
mid=(first+last)/2;
}
if(first>last)
printf("Not found\n",search);

getch();

}
