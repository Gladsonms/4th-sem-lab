
#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,j,temp;
clrscr();
printf("Enter number of elementts:");
scanf("%d",&n);
printf("\n Enter array elements;");
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
printf("\n sorted array is:");
for(i=0;i<n;i++)
printf("\n %d",a[i]);
getch();
}