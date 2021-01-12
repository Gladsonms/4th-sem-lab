#include<stdio.h>
#include<conio.h>
void main()
{
 int arr1[100],arr2[200],arr3[200];
 int s1,s2,s3;
 int i,j,k;
 clrscr();
 printf("\n\n Merge two arrays in sorted order");
 printf("---------------------------------------\n");
 printf("Enter the elements to be stored in the first array: ");
 scan("%d",&s1);
 printf("Input %d elements in the array:\n",s1);
 for(i=0;i<s1;i++)
  {
   printf("Element-%d:",i);
   scanf("%d",&arr1[i]);
  }
 printf("Enter the elements to be stored in the second array:");
 scanf("%d",&s2);
 printf("Input %d elements in the array:\n",s2);
  for(i=0;i<s2;i++)
   {
    printf("Element-%d",i);
    scanf("%d",&arr2[i]);
   }
s3=s1+s2;
 for(i=0;i<s1;i++)
  {
   arr3[i]=arr1[i];
  }
 for(j=0;j<s2;j++)
  {
  arr3[i]=arr2[j];
  i++;
  }
 for(i=0;i<s3;i++)
  {
   for(k=0;k<s3-1;k++)
    {
     if(arr3[k]<=arr3[k+1])
      {
       j=arr3[k+1];
       arr3[k+1]=arr3[k];
       arr3[k]=j;
      }
    }
 }
printf("\n The merged array in decending order is:\n");
for(i=s3;i>0;i--)
{
 printf("%d",arr3[i]);
}
 printf("\n\n");
 getch();
}
