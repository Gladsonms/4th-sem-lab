#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
int low,high,i,temp1,temp2,remainder,n=0,result=0;
clrscr();
printf("Enter two number (interval): \n");
scanf("%d %d",&low,&high);
printf("Armstrong number between %d and an %d are:\n",low,high);
for(i=low+1;i<high;++i)
{
temp2=i;
temp1=i;
while(temp1!=0)
{
temp1/=10;
++n;
}
while(temp2!=0)
{
remainder=temp2%10;
result+=pow(remainder,n);
temp2/=10;
}
if(result==i)
{
printf("%d \n",i);
}
n=0;
result=0;
}
getch();
return 0;
}
