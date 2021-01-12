#include<stdio.h>
void main()
{
int j,i,n;
printf("input upto the table number starting from i:");
scanf("%d",&n);
printf("Multiplication table from 1 to %d \n",n);
for(j=1;j<=n;j++)
{
if(j<=n-1)
printf("%dx%d=%d",j,i,i*j);
else
printf("%dx%d=%d",j,i,i,*j);
}
printf("/n");
}

