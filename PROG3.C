   #include<stdio.h>
   int fibonacci(int);
   int main()
   {
   int n;
   clrscr();
   printf("Enter limited \n");
   scanf("%d",&n);
   printf("\n Nth fibonacci number is %d \n",fibonacci(n));
   getch();
   return 0;
   }
   int fibonacci(int n)
   {
   if(n==0)
   return 0;
   else if(n==1)
   return 1;
   else
   return(fibonacci(n-1)+fibonacci(n-2));
   }