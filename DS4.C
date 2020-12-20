#include<stdio.h>
#include<conio.h>

void main()
{
int n,sum=0,a[50],i;
clrscr();
printf("Enter the size of the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("The element %d is :",i);
scanf("%d",&a[i]);
sum+=a[i];
}
printf("The Sum of the elements is : %d",sum);
getch();
}