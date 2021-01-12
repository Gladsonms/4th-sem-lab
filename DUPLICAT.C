
   #include<stdio.h>
   #include<conio.h>
   int a[100];
   void main()
   {
  int n,i,j,f=0;
  clrscr();
  printf("\t\t\t...Duplicate elements...\n\n");
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the values of the array:\n");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
    if(a[i]==a[j] && i!=j)
    {
    printf("\nDuplicate elements found at %d and %d",i,j);
    }
   }
  }
    {
    if(f==1)
    printf("No Duplicate found\n");
   }
   getch();
  }
