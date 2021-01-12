#include<stdio.h>
#include<conio.h>
int a[100];
void main()
{
 int i,n,k,j;
 clrscr();
 printf("Enter the size of the array:\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(k=0;k<n;k++)
  {
   if(a[k+1]<a[k])
   {
    j=a[k];
    a[k]=a[k+1];
    a[k+1]=j;
    }
   }
  }
  printf("\n The smallest value in array is:",a[0]);
  getch();
 }