#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define blank ' '
#define tab '\t'
#define max 50
long int pop();
long int eval_post();
char infix[max],postfix[max;
long int stack[max];
int top;

void main()
{
 long int value;
 char choice=='y';
 while(choice=='y')
 {
  top=0;
  printf("\nEnter INFIX:");
  fflush(stdin);
  gets(infix);
  infix_to_postfix();
  printf("post fix:%s\n",postfix);
  value=eval_post();
  printf("Value of expression: %d\n",value);
  printf("Do you wat to continue ");