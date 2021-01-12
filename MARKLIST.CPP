#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
char name[20],grade;
int mark,rollno;
};
void main()
{
int n,i,flag=0;
char sname[20];
struct student s[20];
clrscr();
printf("Enter the student number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the student details",i+1);
printf(" \n Enter the roll no \n");
scanf("%d",&s[i].rollno);
printf("Enter the mark \n");
scanf("%d",&s[i].mark);
printf("Enter the name \n");
scanf("%s",&s[i].name);
printf("Enter the grade \n");
fflush(stdin);
scanf("%c",&s[i].grade);
}
printf("\n the student details are \n");
printf("\n roll no:\t name \t \t \t marks \t grade \n");
for(i=0;i<n;i++)
{
printf("%d \t%s\tt \t %d \t \t %c \n",s[i].rollno,s[i].name,s[i].mark,s[i].grade);
}
printf(" enter the name to print the marks \n");
scanf("%s",&sname);
for(i=0;i<n;i++)
{
if(strcmp(s[i].name,sname)==0)
printf("The mark is %d",s[i].mark);
flag=1;
}
if(flag==0)
printf("given t student name not found");
getch();
}