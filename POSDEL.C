#include<stdio.h>
#include<conio.h>
int a[100];
void main()
{
 int i,n,pos;
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("Enter the elements to the array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("The elements are:\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
 printf("\nEnter the position to delete :");
 scanf("%d",&pos);
 for(i=pos;i<n-1;i++)
 {
  a[i]=a[i+1];
  }
  n--;
  printf("\n Array after deletion : ");
  for(i=0;i<n;i++)
  {
   printf("%d",a[i]);
  }
   getch();
  }