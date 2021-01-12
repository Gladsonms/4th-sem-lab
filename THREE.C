#include<stdio.h>
int fibonacci(int);
int main()
{
int n,i=0,c;
clrscr();
printf("Enter thelimit \n");
scanf("%d",&n);
printf("\n Nth fibonacci number is %d \n",fibonacci(n));
//return 0;
getch();
}
int fibonacci (int n)
{
if (n==0)
return 0;
else if (n==1)
return 1;
else
return(fibonacci(n-1)+fibonacci(n-2));
getch();
}