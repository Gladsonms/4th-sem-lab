#include<stdio.h>
#include<conio.h>
#define ROW 2
#define COL 2
void matrixinput(int mat[] [COL]);
void matrixprint(int mat[] [COL]);
void matrixtranspose(int mat[] [COL]);
void matrixmultiply(int mat[] [COL],int mat2[] [COL],int res[] [COL]);
void matrixadd(int mat[] [COL],int mat2[] [COL],int res[] [COL]);
void matrixsub(int mat[] [COL],int mat2[] [COL],int res[] [COL]);
int main()
{
int mat1[ROW] [COL];
int mat2[ROW] [COL];
int product [ROW] [COL],add [ROW] [COL],sub[ROW] [COL];
clrscr();
printf("Enter the elements in the first array of size %dx%d \n",ROW,COL);
matrixinput(mat1);
printf("Enter the elements in the second array of size %dx%d \n",ROW,COL);
matrixinput(mat2);
matrixmultiply(mat1,mat2,product);
printf("Product of both matrices is:\n");
matrixprint(product);
matrixadd(mat1,mat2,add);
printf("\n Sum of first and second matrix: \n");
matrixprint(add);
matrixsub(mat1,mat2,sub);
printf("\n Subtraction of first from second matrix:\n");
matrixprint(sub);
printf("\n matrix before transpose \n");
matrixprint(mat1);
matrixtranspose(mat1);
return 0;
}
void matrixinput(int mat[] [COL])
{
int row,col;
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
scanf("%d",(*(mat+row)+col));
}
}
}
void matrixprint(int mat[] [COL])
{
int row,col;
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
printf("%d",*(*(mat+row)+col));
}
printf("\n");
}
}
void matrixadd(int mat1[] [COL],int mat2[] [COL],int res[] [COL])
{
int i,j;
for(i=0;i<ROW;i++)
{
for(j=0;j<COL;j++)
{
*(*(res+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j);
}
}
}
void matrixsub(int mat1[] [COL],int mat2[] [COL],int res[] [COL])
{
int i,j;
for(i=0;i<ROW;i++)
{
for(j=0;j<COL;j++)
{
*(*(res+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j);
}
}
}
void matrixmultiply(int mat1[] [COL],int mat2[] [COL],int res[] [COL])
{
int row,col,i;
int sum;
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
int sum=0;
for(i=0;i<COL;i++)
{
sum+=(*(*(mat1+row)+i))*(*(*mat2+i)+col);
}
*(*(res+row)+col)=sum;
}
}
}
void matrixtranspose(int mat[] [COL])
{
int row,col,trans[ROW][COL];
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
*(*(trans+col)+row)=*(*(mat+row)+col);
}
}
printf("Matrix after transpose");
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
printf("%d",*(*(trans+row)+col));
}
printf("\n");
}
getch();
}