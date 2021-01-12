#include<stdio.h>
#include<conio.h>
void main()
{
static int a[10][10];
int i,j,m,n;
int counter=0;
clrscr();
printf("\t\t\t Sparse matriX \n");
printf("\n Enter the order of the matrix");
scanf("\n %d%d",&m,&n);
printf("Enter the coefficentt of the matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;++j)
{
scanf("\n %d",&a[i][j]);
if(a[i][j]==0)
{
++counter;
}
}
}
if(counter>((m*n)/2))
{
printf("\n The given matrix is SPARSE matrix");
}
else
printf("\n The given matrix is NOT a SPARSE matrix");
printf("\n There  are %d number of ZEROS",counter);
getch();
}

