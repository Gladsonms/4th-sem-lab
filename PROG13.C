#include<stdio.h>
#include<math.h>
void main()
{
FILE *all,*even,*odd;
int number,i,records;
clrscr();
printf("Input the total number of records that you want to enter");
scanf("%d",&records);
printf("Enter the numbers");
all=fopen("Any number","w");
for(i=1;i<=records;i++)
{
scanf("%d",&number);
if (number==-1)break;
putw(number,all);
}
fclose(all);
all=fopen("Any number","r");
even=fopen("even number","w");
odd=fopen("Odd number","w");
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
printf("the even numbers are:");
while((number=getw(even))!=EOF)
printf("\n %d",number);
printf("\n The odd numbers are");
while((number=getw(odd))!=EOF)
printf("\n %d \n",number);
fclose(odd);
getch();
}


