#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
FILE *all,*even,*odd;
int number,i,records;
clrscr();
printf("Input the total number of records that you want to enter");
scanf("%d",&records);
printf("enter numbers");
all=fopen("any number","w");
for(i=1;i<=records;i++)
{
scanf("%d",&number);
if(number==-1)break;
putw(number,all);
}
fclose(all);
all=fopen("any number","r");
even=fopen("even number","w");
odd=fopen("odd number","w");
while((number=getw(all))!=EOF)
{
if(number%2==0)
putw(number,even);
else
putw(number,odd);
}
fclose(all);
fclose(even);
fclose(odd);
even=fopen("even number","r");
odd=fopen("odd number","r");
printf("even numbers are");
while((number=getw(even))!=EOF)
printf("\n %d",number);
printf("\n the odd numbers are");
while((number=getw(odd))!=EOF)
printf("\n %d \n",number);
fclose(even);
fclose(odd);
getch();
}
