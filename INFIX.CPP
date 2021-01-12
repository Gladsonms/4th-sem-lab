#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define tab '\t'
#define blank ' '
#define MAX 50

prec(char);
whitespace(char);
infix_to_postfix();
push(long int);

long int pop();
long int eval_post();
char infix[MAX],postfix[MAX];
long int stack[MAX];
int top;
void main()
{
long int value;
char choice='y';
clrscr();
while(choice=='y')
{
top=0;
printf("\nEnter infix : ");
fflush(stdin);
gets(infix);
infix_to_postfix();
printf("Postfix : %s\n",postfix);
value=eval_post();
printf("Value of expresssion %d\n",value);
printf("Do you want to continue? (y/n) :");
scanf("%c",&choice);
}
getch();
}


infix_to_postfix()
{
int i,p=0,type,precedence,len;
char next;
stack[top]='#';
len=strlen(infix);
infix[len]='#';
for(i=0;infix[i]!='#';i++)
{
if(!whitespace(infix[i]))
{
switch(infix[i])
{
case '(':
push(infix[i]);
break;
case ')':
while((next=pop())!='(')
postfix[p++]=next;
break;
case '+':
case '-':
case '*':
case '/':
case '^':
precedence=prec(infix[i]);
while(stack[top]!='#' && precedence <= stack[top])
postfix[p++]=pop();
push(infix[i]);
break;
default:
postfix[p++]=infix[i];
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
case '(': return 0;
case '+':
case '-': return 1;
case '*':
case '/':
case '%': return 2;
case '^': return 3;
}
return -1;
}

push(long int symbol)
{
if(top>MAX)
{
printf("\nStack Overflow");

exit(1);
}
else
{
top=top+1;
stack[top]=symbol;
}
return 0;
}


long int pop()
{
if(top==-1)
{
printf("Stack underflow");
exit(2);
}
else
{
return stack[top--];
}
return 0;
}

whitespace(char symbol)
{
if(symbol==blank ||symbol==tab||symbol=='\0')
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
if(postfix[i]<='9' && postfix[i]>='0')
push(postfix[i]-48);
else
{
a=pop();
b=pop();
switch(postfix[i])
{
case '+': temp=b+a;break;
case '-': temp=b-a;break;
case '*': temp=b*a;break;
case '/': temp=b/a;break;
case '%': temp=b%a;break;
case '^': temp=pow(b,a);
}
push(temp);
}
}
result=pop();
return result;
}