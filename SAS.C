#include<stdio.h>
#include<math.h>
#include<conio.h>
float standard_deviation(float data[],int n);
int main()
{
int n,i;
float data[100];
clrscr();
printf("Enter the number of data:");
scanf("%d",&n);
printf("Enter the element:");
for(i=0;i<n;++i)
scanf("%f",&data[i]);
printf("\n");
printf("Standard deviation =%0.2f",standard_deviation(data,n));
getch();
return 0;
}
float standard_deviation(float data[],int n)

{
float mean=0.0,sum_deviation=0.0;
int i;
for(i=0;i<n;++i)
{
mean+=data[i];
}
mean=mean/n;
for(i=0;i<n;++i)
sum_deviation+=(data[i]-mean)*(data[i]-mean);
return sqrt(sum_deviation/n);
}


