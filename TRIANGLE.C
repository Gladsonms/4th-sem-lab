#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,row=3,col=3;
 clrscr();
 printf("Upper triangle forms like\n");
  for(i=0;i<row;i++)
   {
    for(j=0;j<col;j++)
     {
      if(i<j||i==j)
       {
	printf("1");
       }
      else
       printf("0");
       printf(" ");
       }
       printf("\n");
      }
    printf("Lower Triangle forms like\n");
    for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
     {
      if(i>j||i==j)
       {
       printf("-1");
       }
      else
      printf("0");
      printf(" ");
     }
     printf("\n");
    }
   printf("Triangle with diagonal elements Zero\n");
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
     {
     if(i==j)
      {
      printf("0");
      }
      else
      printf("1");
      printf(" ");
      }
      printf("\n");
      }
      getch();
      }

