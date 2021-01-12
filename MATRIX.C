#include<stdio.h>
#define ROW 2
#define COL 2
void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixTranspose(int mat[][COL]);
void matrixMultiply(int mat1[][COL],int mat2[][COL],int res[][COL]);
void matrixAdd(int mat1[][COL],int mat2[][COL],int res[][COL]);
void matrixSub(int mat1[][COL],int mat2[][COL],int res[][COL]);
void main()
{
 int mat1[ROW][COL];
 int mat2[ROW][COL];
 int product[ROW][COL],add[ROW][COL],sub[ROW][COL];
 clrscr();
 printf("Enter elements in the first matrix of size %dx%d \n",ROW,COL);
 matrixInput(mat1);
 printf("Enter elements in second matrix of size %dx%d \n",ROW,COL);
 matrixInput(mat2);
 matrixMultiply(mat1,mat2,product);
 printf("Product of both matrices is: \n");
 matrixPrint(product);
 matrixAdd(mat1,mat2,add);
 printf("\n sum of first and second matrice");
 matrixSub(mat1,mat2,add);
 printf("\n subtraction of first from second matrice");
 matrixPrint(sub);
 printf("Matrix before transpose\n");
 matrixPrint(mat1);
 matrixTranspose(mat1);
// return 0;
}
void matrixInput(int mat[][COL])
 {
  int row,col;
  for(row=0;row<ROW;row++)
   {
    for(col=0;col<COL;col++)
     {
      scanf("%d",(*mat+row+col));
     }
   }
 }
 void matrixPrint(int mat[][COL])
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
  void matrixAdd(int mat1[][COL],int mat2[][COL],int res[][COL])
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
  void matrixSub(int mat1[][COL],int mat2[][COL],int res[][COL])
  {
   int i,j;
    for(i=0;i<ROW;i++)
     {
      for(j=0;j<COL;j++)
       {
	*(*(res+i)+j)=*(*(mat1+i)+j)-*(*(mat2+i)+j);
       }
     }
   }
  void matrixMultiply(int mat1[][COL],int mat2[][COL],int res[][COL])
  {
   int i,row,col,sum;
    for(row=0;row<ROW;row++)
     {
      for(col=0;col<COL;col++)
       {
       sum=0;
       for(i=0;i<COL;i++)
       {
	sum+=(*(*mat1+row)+i)*(*(*(mat2+i)+col));
       }
       *(*(res+row)+col)=sum;
       }
     }
   }
   void matrixTranspose(int mat[][COL])
   {
    int row,col,trans[ROW][COL];
    for(row=0;row<ROW;row++)
     {
      for(col=0;col<COL;col++)
      {
     *(*(trans+col)+row)=*(*(mat+row)+col);
      }
       printf("Matrix after transpose\n");
      }
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