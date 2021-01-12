#include<stdio.h>
int main()
{
int n,i;
clrscr();
printf("Enter a number");
scanf("%d",&n);
for(i=10;i<n;i*=10)
for(i=i/10;n>0;i/=10)
{
n%=i;
printf("%d\n",n);

}
getch();
return 0;
}