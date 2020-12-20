#include<stdio.h>
#include<conio.h>
void main()
{
char base_digits[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int converted_number[64];
int nto;
int nd,base,index=0;
clrscr();
printf("Decimal to other base conversion program\n");
printf("Enter a decimal number");
scanf("%d",&nto);
printf("Enter the desired base:");
scanf("%d",&base);

while(nto!=0)
{
converted_number[index]=nto%base;
nto=nto/base;
++index;
}
index--;
printf("\n Converted number from base 10 to base %d=",base);
for(;index>=0;index--)
{
printf("%c",base_digits[converted_number[index]]);
}
printf("\n");
getch();
}
