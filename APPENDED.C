#include<stdio.h>
#include<conio.h>
int a1[50],a2[50],a3[100];
void main()
{
int i,j,k,s1,s2;
clrscr();
printf("\n \t \t Appending of array");
printf("\n enter the size of the first array :");
scanf("%d",&s1);
printf("\n enter the elements to be inserted :");
for(i=0;i<s1;i++)
{
scanf("%d",&a1[i]);
}
printf("\n enter the size of second array :");
scanf("%d",&s2);
printf("\n enter the elements to be inserted :");
for(i=0;i<s2;i++)
{
scanf("%d",&a2[i]);
}

for(i=0;i<s1;i++)
{
a3[i]=a1[i];
}
for(j=0;j<s2;j++)
{
a3[i]=a2[j];
i++;
}
printf("\n \n the appended array is :");
for(i=0;i<s1+s2;i++)
printf("%d \t",a3[i]);
getch();
}
