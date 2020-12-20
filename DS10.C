#include<stdio.h>
#include<conio.h>

void main()
{
static int array[10][10];
int i,j,m,n,counter=0;
clrscr();
printf("\n To find Sparse matrix \n");
printf("\n Enter order of matrix:");
scanf("%d %d",&m,&n);
printf("Enter the coefficients of the matrix \n");
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
if (counter > ((m*n)/2))
{
printf("The given matrix is Sparse Matrix \n");
}
else
printf("The given matrix is not a sparse matrix \n");

printf("The number of zeroes is %d", counter);
getch();
}