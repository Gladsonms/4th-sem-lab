#include<stdio.h>
#include<conio.h>
void main ()
{
char s[200];
int count=0,i;
clrscr();
printf("Enter the string \n");
scanf("%d [^\n]s",s);
for(i=0;s[i]!='\o';i++)
{
if(s[i]==' ')
count++;
}
printf("number of words in given srting %d \n",count++);
getch();
}