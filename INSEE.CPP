#include<stdio.h>
#include<conio.h>
#define size 10
void insertion_sort(int arr[5],int n);
void main(){
int arr[size],i,n;
clrscr();
printf("INSERTION SORT");
printf("\nEnter the no. of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
insertion_sort(arr,n);
for(i=0;i<n;i++)
scanf("%d",arr[i]);
getch();
}
void insertion_sort(int arr[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
temp=arr[i];
j=i-1;
while((temp<arr[j])&&(j>=0))
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}
printf("sorted array is:");
}

