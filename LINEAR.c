#include<stdio.h>
#define MAX 100
 
int linear(int arr[],int n, int key);
 
int main()
{
    int arr[MAX],key,i,n,pos;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the element you want to search: ");
    scanf("%d",&key);
    pos=linear(arr,n,key);
    if(pos==-1)
        printf("Element not found");
    else
        printf("Searching is successfully at position %d",pos+1);
    return 0;
}
 
int linear(int arr[],int n, int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
            return i;
    }
    return -1;
}

