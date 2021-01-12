#include<stdio.h>
#include<conio.h>
void main ()
{
long signed int number,base,k,op,s,p;
clrscr();
printf("Enter the number and its base");
scanf("%ld %ld",&number,&base);
op=1;
k=number;
p=1;
while(k!=0)
{
s=k%10;
k=k/10;
op=op+s*p;
p=p*base;
}
printf("The number is %ld",op);
getch();
}
