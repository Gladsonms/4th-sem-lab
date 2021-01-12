#include<stdio.h>
#include<math.h>
#include<conio.h>
void main ()
{
int m1,m2,m3,m4,m5,t;
float avg;
clrscr();
scanf("%d",&m1);
scanf("%d",&m2);
scanf("%d",&m3);
scanf("%d",&m4);
scanf("%d",&m5);
t=m1+m2+m3+m4+m5;
printf("sum= %d",t);
avg=(m1+m2+m3+m4+m5)/5;
printf("average= %f",avg);
getch();
}


