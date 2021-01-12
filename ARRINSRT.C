#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],i,n,pos,v;
 clrscr();

 printf("\tArray insertion\n");
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("Enter the elements to the array:");
 for(i=0;i<n-1;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the value to be insert:");
 scanf("%d",&v);
 {
  printf("Enter index to insert the value:");

  scanf("%d",&pos);
  }
 {

  for(i=n-1;i>=pos;i--)
  {
  a[i]=a[i-1];
  }
  a[pos]=v;
  printf("\n New array:");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  }
  getch();
}