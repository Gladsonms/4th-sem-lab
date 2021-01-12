#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
printf("enter a number");
scanf("%d",&n);
for(i=10;i<n;i*=10);
for(i=i/10;n>0;i/=10)
{
printf("%d\n",n);
n%=i;
}
getch();
return 0;
}
