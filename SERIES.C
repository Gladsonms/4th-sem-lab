#include<math.h>
#include<stdio.h>
double series(int n)
{
int i;
double sums=0.0,ser;
clrscr();
for(i=1;i<=n;i++)
{
ser=1/pow(i,i);
sums+=ser;
}
return sums;
}
int main()
{
int n;
double res=series(n);
printf ("Enter the limit ");
scanf("%d",&n);
printf("\n Sum ofseries is %f",res);
getch();
return 0;
}
