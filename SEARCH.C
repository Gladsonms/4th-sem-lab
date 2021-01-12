#include<stdio.h>
#include<conio.h>
int a[100];
void main()
{
int i,n,s,flag=0;
clrscr();
printf("\tSEARCHING\n");
printf("Enter the size of the array:");
scanf("%d",&n);
printf("\nEnter the elements of the array:\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("Enter the elements to be searched:");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
 printf("Elements found at the position %d",i+1);
 flag=1;
}
if(flag==0)
{
printf("Elements not found");
}
}
getch();

}
