#include<stdio.h>
#include<conio.h>
void quicksort(int number[25],int first,int last)
{
 int i,j,pivot,temp;
 if(first<last)
 {
  pivot=first;
  i=first;
  j=last;
  while(i<j)
  {
   while((number[i]<=number[pivot])&&(i<last))
   {
   i++;
   }
   while(number[j]>number[first])
   {
   j--;
   }
   if(i<j)
   {
    temp=number[i];
    number[i]=number[j];
    number[j]=temp;
   }
  }
   temp=number[first];
   number[pivot]=number[j];
   number[j]=temp;
   quicksort(number,first,j-1);
   quicksort(number,j+1,last);
   }
  }
    void main()
    {
     int i,count,number[25];
     clrscr();
     printf("\n\t\t\tQUICK SORT");
     printf("\n\nEnter no.of elements(Max-25) : ");
     scanf("%d",&count);
     printf("\nEnter the elements : ");
     for(i=0;i<count;i++)
     {
      scanf("%d",&number[i]);
     }
      quicksort(number,0,count-1);
      printf("\nThe sorted  order is : ");
      for(i=0;i<count;i++)
      {
       printf("%d ",number[i]);
      }
      getch();
     // return 0;
      }

