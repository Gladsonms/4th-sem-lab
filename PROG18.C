#include<stdio.h>
#include<string.h>
void main()
{int arr1[100],arr2[100],arr3[200];
int s1,s2,s3;
int i,j,k;
clrscr();
printf("\n Merge two arrays in sorted order \n");
printf("input no. of elements to be stored in first array");
scanf("%d",&s1);
printf("Input %d elements in the array; \n",s1);
for(i=0;i<s1;i++)
{
printf("Elements %d;",i);
scanf("%d",&arr1[i]);
}
printf("Input the number of elements to be stored in the second array:");
scanf("%d",&s2);
printf("Input %d elements in the array; \n",s2);
for (i=0;i<s2;i++)
{
printf("Element %d :",i);
scanf("%d",&arr2[i]);
}
s3=s1+s2;
for(i=0;i<s1;i++)
{
arr3[i]=arr1[i];
}
for (j=0;j<s2;j++)
{
arr3[i]=arr2[j];
i++;
}
printf("\n The merged array is:");
for(i=0;i<s3;i++)
{
printf("\t %d",arr3[i]);
}

for(i=0;i<s3;i++)
{
for(k=0;k<s3-1;k++)
{
if (arr3[k]<=arr3[k+1])
{
j=arr3[k+1];
arr3[k+1]=arr3[k];
arr3[k]=j;
}
}
}
printf("\n The merged array in  descending order is:");
for(i=0;i<s3;i++)
{
printf("\t %d",arr3[i]);
}
printf("\n \n");
getch();
}