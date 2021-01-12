#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
char string1[20];
int i,lenght;
int flag=0;
clrscr();
printf("Enter a string:");
scanf("%s",string1);
lenght=strlen(string1);
for (i=0;i<lenght;i++)
{
if(string1[i]!=string1[lenght-i-1])
{
flag=1;
break;
}
}
if(flag)
{
printf("%s is not a palindrome",string1);
}
else
{
printf("%s is a palindrome",string1);
}
getch();
return 0;
}
