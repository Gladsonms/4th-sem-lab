#include<stdio.h>
#include<conio.h>
struct student
{
int sub1[10];
};
void main()
{
struct student s[10];
int i, total=0,n,m,j;
float avg;
clrscr();
printf("Enter number of students");
scanf("%d",&n);
printf("Enter total subjects:");
scanf("%d",&m);
for (i=0;i<n;i++)
{
printf("\n Enter marks of subjects of students %d=",i+1);
for (j=0;j<m;j++)
scanf("%d",&s[i].sub1[j]);
for(j=0;j<m;j++)
{
total=total+s[i].sub1[j];
}
avg =total/m;
printf("\n Total marks of student number %d=%d",i+1,total);
printf("\n Average mark of students %d=%f",i+1,avg);
total=0;
}
getch();
}