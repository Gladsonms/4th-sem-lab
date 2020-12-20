#include<stdio.h>
#include<string.h>
#include<conio.h>
char *replace_str(char *str,char *orig,char *rep)
{
static char buffer[4096];
char *p;
if(!(p=strstr(str,orig)))
return str;
strncpy(buffer,str,p-str);
buffer[p-str]=' ';
sprintf(buffer+(p-str),"%s %s",rep,p+strlen(orig));
return buffer;
}
int main(void)
{
char str[100],str1[50],str2[50];
clrscr();
printf("Enter one line string...\n");
gets(str);
printf("\n Enter the sub string to be replaced....\n");
gets(str1);
printf("\n Enter the replacing string...\n");
gets(str2);
printf("Final string output is ...\n");
puts(replace_str(str,str1,str2));
getch();
return 0;
}
