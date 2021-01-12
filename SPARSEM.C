#include<stdio.h>
#include<conio.h>
void main()
{
 static int array[10][10];
 int i,j,m,n;
 int counter=0;
 clrscr();
 printf("\t...SPARSE MATRIX...\n");
 printf("Enter the order of the matrix:\n");
 scanf("%d %d",&m,&n);
 printf("Enter the co-efficients of the matrix\n");
 for(i=0;i<m;++i)
 {
  for(j=0;j<n;++j)
  {
   scanf("%d",&array[i][j]);
   if(array[i][j]==0)
   {
    ++counter;
   }
  }
 }
  if(counter>((m*n)/2))
  {
   printf("The given matrix is sparse\n");
   }
   else
   printf("The given matrix is not a sparse matrix\n");
   printf("There are %d no.of zeroes",counter);
   getch();
 }