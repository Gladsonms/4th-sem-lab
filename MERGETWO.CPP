#include<stdio.h>
#include<conio.h>
void main()
{
 int arr1[100],arr2[100],arr3[200];
 int s1,s2,s3;
 int i,j,k;
 clrscr();
 printf("Input the number of elements to be stored in the first array:");
 scanf("%d",&s1);
 printf("Input %d the elements :",s1);
 for(i=0;i<s1;i++)
 {

  scanf("%d",&arr1[i]);
 }
 printf("Input the number of elements to be stored in the second array:");
 scanf("%d",&s2);
 printf("Input %d the elements :",s2);
 for(i=0;i<s2;i++)
 {
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
 printf("Merged array: ");
 for(i=s3;i>0;i--)
  {
  printf("%d",arr3[i]);
  }
  printf("\n\n");
  getch();
 }


