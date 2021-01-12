#include<stdio.h>
#include<conio.h>
#define max 30
enum bool{FALSE,TRUE};
main()
{
int array[max],n,i;
clrscr();
printf("\n Enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the elements%d:",i+1);
scanf("%d",&array[i]) ;
}
printf("\n Unsorted list is:");
display(array,0,n-1);
printf("\n");
quick(array,0,n-1);
printf("\nSorted list is:");
display(array,0,n-1);
printf("\n");
}
quick(int array[],int low,int up)
{
int piv,temp,left,right;
enum bool pivot_placed=FALSE;
left=low;
right=up;
piv=low;
if(low>=up)
return;
printf("\n Sub list:");
display(array,low,up);
while (pivot_placed==FALSE)
{
while(array[piv]<=array[right]&&piv!=right)
right=right-1;
if(piv==right)
pivot_placed=TRUE ;
if(array[piv]>array[right])
{
temp=array[piv];
array[piv]=array[right];
array[right]=temp;
piv=right;
}
while(array[piv]>=array[left]&&left!=piv)
left=left+1;
if(piv==left)
pivot_placed=TRUE;
if(array[piv]<array[left])
{
temp=array[piv];
array[piv]=array[left];
array[left]=temp;
piv=left;
}}
printf("->pivot_placed is %d->",array[piv]);
display(array,low,up);
printf("\n");
quick(array,low,piv-1);
quick(array,piv+1,up);
}
display(int array[],int low,int up)
{
int i;
for(i=low;i<=up;i++)
printf("%d",array[i]);
}
