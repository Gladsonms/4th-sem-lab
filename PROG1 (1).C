 #include<stdio.h>
 #include<conio.h>
 void main()

{
int num,sum=0,rev=0,d;
clrscr();
printf("Enter The Number:");
scanf("%d",&num);
while(num)
{
d=num%10;
num=num/10;
sum=sum+d;
rev = rev*10 + d;
}
printf("Sum of Digits =%d", sum);
printf("\nReverse of the number=%d", rev);
getch();
}