#include<stdio.h>
#include<conio.h>
#define size 5
void ins_sort(int arr[],int n);
void main()
{
int arr[size],i,n;
clrscr();
printf("\n\t\t Insertion Sort");
printf("\n enter the size");
scanf("%d",&n);
printf("\n enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
ins_sort(arr,n);
printf("\n the sorted array is :");
for(i=0;i<n;i++)
printf("\n %d",arr[i]);
getch();
}
void ins_sort(int arr[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
temp=arr[i];
j=i-1;
while((temp<arr[j]&&j>=0))
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}
}


