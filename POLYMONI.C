#include<stdio.h>
#include<conio.h>
#include<math.h>
struct poly
{
int coeff;
int exp;
};
struct poly a[50],b[50],c[50],d[50];
void main()
{
int i;
int deg1,deg2;
int k=0,m=0,l=0;
clrscr();
printf("enter the highest degree of poly1:");
scanf("%d",&deg1);
for(i=0;i<=deg1;i++)
{
printf("\n enter the coeff of x^%d:",i);
scanf("%d",&a[i].coeff);
a[k++].exp=i;
}
printf("\n enter the highest degree of poly2:");
scanf("%d",&deg2);
for(i=0;i<=deg2;i++)
{
printf("\n enter the coeff of x^%d:",i);
scanf("%d",&b[i].coeff);
b[l++].exp=i;
}
printf("\n expression1=%d",a[0].coeff);
for(i=1;i<=deg1;i++)
{
printf("+%dx^%d",a[i].coeff,a[i].exp);
}
printf("\n expression2=%d",b[0].coeff);
for(i=1;i<=deg2;i++)
{
printf("+%dx^%d",b[i].coeff,b[i].exp);
}
if(deg1>deg2)
{
for(i=0;i<=deg2;i++)
{
c[m].coeff=a[i].coeff+b[i].coeff;
c[m].exp=a[i].exp;
m++;
}
for(i=deg2+1;i<=deg1;i++)
{
c[m].coeff=a[i].coeff;
c[m].exp=a[i].exp;
m++;
}
}
else
{
for(i=0;i<=deg1;i++)
{
c[m].coeff=a[i].coeff+b[i].coeff;
c[m].exp=a[i].exp;
m++;
}
for(i=deg1+1;i<=deg2;i++);
{
c[m].coeff=b[i].coeff;
c[m].exp=b[i].exp;
m++;
}
}
printf("\n expression after addittion =%d",c[0].coeff);
for(i=1;i<m;i++)
{
printf("+%dx^%d",c[i].coeff,c[i].exp);
}
getch();
return;
}
