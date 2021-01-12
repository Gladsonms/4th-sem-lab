#include<stdio.h>
#include<math.h>
#include<conio.h>
double series(int n)
{
int i;
double sums=0.0,ser;
clrscr();
for(i=1;i<=n;++i)
{
ser=1/pow(i,i);
sums+=ser;
}
return sums;
}
int main()
{
int n;
double res;
printf("Enter the limit");
scanf("%d",&n);
res=series(n);
printf("\n sum of series is %f",res);
getch();
return 0;
}

