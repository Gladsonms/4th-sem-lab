#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,j;
clrscr();
printf("Enter a number");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=i;j>=1;j--)
{
printf("%d\n",j);
}
}
return 0;
}


