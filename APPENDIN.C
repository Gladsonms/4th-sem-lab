#include<stdio.h>
#include<conio.h>
int a1[100],a2[100],a3[200];
void main()

{
 int i,j,s1,s2,s3;
 clrscr();
 printf("\t\3 Appending of arrays \3\n");
 printf("\nEnter the size of the 1st array:");
 scanf("%d",&s1);
 printf("Enter the values of first array:\n");
 for(i=0;i<s1;i++)
 {
  scanf("%d",&a1[i]);
 }
 printf("The elements in first array:");
 for(i=0;i<s1;i++)
 {
  printf("%d ",a1[i]);
 }
 printf("\nEnter the size of the 2nd array:");
 scanf("%d",&s2);
 printf("Enter the values of second array:\n");
 for(i=0;i<s2;i++)
 {
  scanf("%d",&a2[i]);
 }
 printf("The elements in second array:");
 for(i=0;i<s2;i++)
 {
  printf("%d ",a2[i]);
 }
  for(i=0;i<s2;i++)
  {
   a3[i]=a1[i];
  }
  for(j=0;j<s2;j++)
  {
   a3[i]=a2[j];
   i++;
   }
   printf("\nThe appended array:");
   for(i=0;i<s1+s2;i++)
   {
    printf("%d ",a3[i]);
   }
   getch();
   }
