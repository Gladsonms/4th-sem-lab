#include<stdio.h>
#include<conio.h>
#define max 10
int queue[max];
int front=-1,rear=-1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main()
{
int option val;
clrscr();
do
{
printf("\n ****MAIN MENU****");
printf("\n 1.Insert an element");
printf("\n 2.delete an element");
printf("\n 3.Peek");
printf("\n 4.display the queue");
printf("\n 5.exit");
printf("\n Enter your option:");
scanf("%d",&option);
switch(option)
{
case 1:insert();
break;
case 2:val=delete_element();
if(val!=-1)
printf("\n The number deleted is:%d",val);
break;
case 3:val=peek();
if(val!=-1)
printf(
