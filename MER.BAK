#include<stdio.h>
#include<conio.h>
int a1[50],a2[50],a3[100];
void main()
{
int i,j,k,s1,s2;
clrscr();
printf("\t \t \t Merging of array");
printf("\n Enter the size of the first array : ");
scanf("%d",&s1);
printf("\n Enter the elements of the array :");
for(i=0;i<s1;i++)
{
scanf("%d",&a1[i]);
}
printf("\n Enter the size of second array  :");
scanf("%d",&s2);
printf("\n Enter the elements of the array :");
for(i=0;i<s2;i++)
{
scanf("%d",&a2[i]);
}
for(i=0;i<s1;i++)
{
for(k=0;k<s1;k++)
{
if(a1[k]<a1[k+1])
{
j=a1[k+1];
a1[k+1]=a1[k];
a1[k]=j;
}
}
}
printf("\n sorted array a1:");
for(i=0;i<s1;i++)
{
printf("%d \t",a1[i]);
}
for(i=0;i<s2;i++)
{
for(k=0;k<s2;k++)
{
if(a2[k]<a2[k+1])
{
j=a2[k+1];
a2[k+1]=a2[k];
a2[k]=j;
}
}
}
printf("\n sorted array a2:");
for(i=0;i<s2;i++)
{
printf("%d \t",a2[i]);
}
for(i=0;i<s1;i++)
{
a3[i]=a1[i];
}
for(j=0;j<s2;j++)
{
a3[i]=a2[j];
i++;
}
printf("\n The merged array is :");
for(i=0;i<s1+s2;i++)
printf("\t %d",a3[i]);
printf("\n the sorted array is");
for(i=0;i<s1+s2;i++)
{
for(k=0;k<s1+s2;k++)
{
if(a3[k]<a3[k+1])
{
j=a3[k+1];
a3[k+1]=a3[k];
a3[k]=j;
}
}
}
for(i=0;i<s1+s2;i++)
printf("%d \t",a3[i]);
getch();
}


