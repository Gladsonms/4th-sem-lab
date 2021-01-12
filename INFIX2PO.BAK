#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define blank ' '
#define tab '\t'
#define max 50

prec(char);
whitespace(char);
infix_to_postfix();
//push (long int);

long int pop();
push(long int);
long int eval_post();
char infix[max],postfix[max];
long int stack[max];
int top;

void main()
{
 long int value;
 char choice='y';
 clrscr();

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
  printf("Do you want to continue ");
  scanf("%c",&choice);
  }
 }

  infix_to_postfix()
   {
   int i,p=0,type,precedence,len;
   char next,white_space;
   stack[top]='#';
   len=strlen(infix);
   infix[len]='#';
   for(i=0;infix[i]!='#';i++)
   {
    if(!whitespace(infix[i]))
    {
    switch(infix[i])
    {
     case '(':push(infix[i]);
	      break;
     case ')':while((next=pop())!='c')
	      postfix[p++]=next;
	      break;
     case '+':
     case '-':
     case '*':
     case '/':
     case '%':
     case '^':
    precedence=prec(infix[i]);
     while(stack[top]!='#'&&precedence<=prec(stack[top]))
     postfix[p++]=pop();
     push(infix[i]);
     break;
     default:postfix[p++]=infix[i];
     }
    }
   }
    while(stack[top]!='#')
    postfix[p++]=pop();
    postfix[p]='\0';
    return 0;
   }


   prec(char symbol)

     {
     switch(symbol)
     {
     case '(':return 0;
     case'+':;
     case'-':return 1;
     case'*':;
     case'/':;
     case'%':return 2;
     case'^':return 3;
     }
     return -1;
    }

    long int pop()
    {
	if(top==-1)
	{
		printf("Stack underflow\n");
		exit(2);
	}
	else
	{
		return stack[top--];
	}
    }

     push(long int symbol)
     {
      if(top>max)
      {
       printf("\nStack Overflow");
       exit(0);
      }
      else
      {
      top=top+1;
      stack[top]=symbol;
     //  return stack[top--];
      }
      }


      whitespace(char symbol)
      {
       if(symbol==blank||symbol==tab||symbol=='\0')
       return 1;
       else
	return 0;
      }


       long int eval_post()
       {
	long int a,b,temp,result,len;
	int i;
	len=strlen(postfix);
	postfix[len]='#';
	for(i=0;postfix[i]!='#';i++)
	{
	 if(postfix[i]<='9'&&postfix[i]>='0')
	 push(postfix[i]-48);
	 else
	 a=pop();
	 b=pop();
	 switch(postfix[i])
	 {
	  case'+':temp=b+a;break;
	  case'-':temp=b-a;break;
	  case'*':temp=b*a;break;
	  case'/':temp=b/a;break;
	  case'%':temp=b%a;break;
	  case'^':temp=pow(b,a);
	 }
	  push(temp);
	 }
	  result=pop();
	  return result;
	 }
