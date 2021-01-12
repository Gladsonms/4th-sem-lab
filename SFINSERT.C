#include<stdio.h>
#include<conio.h>
#define size 5
void insertion_sort(int arr[],int n);
void main()
{
int arr[size],i,n;
clrscr();
printf("\n Insertiom sort.");
printf("\n Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
insertion_sort(arr,n);
printf("\n the sorted array:");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
getch();
}
void insertion_sort(int arr[],int n)
{
int i,j ,temp;
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