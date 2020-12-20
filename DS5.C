#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],n,i,j,f=0,s;
 clrscr();
 printf("\n Enter the size of the array:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n Enter element %d:",i);
  scanf("%d",&a[i]);
 }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      {
	printf("\n This value %d has a duplicate value at address %d",a[i],j);
	f=1;
	break;
       }
     }
   }
   if(f==0)
   printf("\n All values are unique in the array ");
   s=0;
   for(j=1;j<n;j++)
   {
   if(a[s] > a[j])
   {
    s=j;
   }
   }
   printf("\n \nThe smallest value is %d ",a[s]);
   getch();
   }