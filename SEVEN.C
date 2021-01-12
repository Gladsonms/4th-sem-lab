#include<stdio.h>
#include<conio.h>
void main()
{
int ar[100],i,n,j,counter;
float avg=0,numprime=0;
clrscr();
for(i=0;i<n;i++)
{scanf("%d",&ar[i]);
}
printf("array is");
for(i=0;i<n;i++)
{
printf("\t %d",ar[i]);
}
printf("\n all the prime numbers in the array are");
for(i=0;i<n;i++)
{
if(ar[i]%j==0)
{
counter=1;
break;
}
}
if(counter==0)
{
printf("\t %d",ar[i]);
numprime+=1;
avg+=ar[i];
}
}
avg/=numprime;
printf("Average of prime numbers is %f",avg);
getch();
}