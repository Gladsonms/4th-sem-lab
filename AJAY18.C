#include<stdio.h>
int fibonacci(int);
int main()
{
int n,c;
clrscr();
printf("enter limit\n");
scanf("%d",&n);
printf("\n Nth fibonacci number is %d\n",fibonacci(n));
getch();
return 0;
}
int fibonacci(int n)
{
if(n==1)
return 1;
else if(n==2)
return 2;
else
return(fibonacci(n-1)+fibonacci(n-2));
}
