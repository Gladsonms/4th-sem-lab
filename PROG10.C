#include<stdio.h>
#include<conio.h>
typedef struct complex
{
float real;
float imag;
}complex;
complex add(complex n1, complex n2);
int main()
{
complex n1,n2,temp;
printf("For 1st complex number \n");
printf("Enter real and imaginary part respectively \n");
scanf("%f %f",&n1.real,&n1.imag);
printf("\n For 2nd complex number \n");
temp=add(n1,n2);
printf("sums=i %f+%f.1",temp.real,temp.imag);
return 0 ;
}
complex add(complex n1,complex n2)
{
complex temp;
temp.real=n1.real;
temp.imag=n1.imag=n2.imag;
return(temp);
}
