#include<stdio.h>
#include<conio.h>
void main()
{
int arr[50],i,n,a,f;
clrscr();
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the elements of the array:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter value to be searched");
scanf("%d",&a);
for(i=0;i<n;i++)
{
if(arr[i]==a)
{
f=1;
break;
}
}
if(f==1)
{
printf("value is found at location %d",i+1);
}
else
{
printf("value not found");
}
getch();
}




