 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 #include<ctype.h>


 struct node
  {
     int info;
     struct node*link;
     }*start;
 void create_list(int data);
 void addatbeg(int data);
 void addafter(int data,int pos);
 void del(int data);
 void display();
 void count();
 void rev();
 void search(int data);
 void main()
 {
  int choice,n,m,position,i;
  clrscr();
  start=NULL;
  while(1)
  {
 printf("\t\t\tSINGLE LINKED LIST");
 printf("\n1.Create list");
 printf("\n2.Add at Beginning");
 printf("\n3.Add at end");
 printf("\n4.Delete");
 printf("\n5.Display");
 printf("\n6.count");
 printf("\n7.Reverse");
 printf("\n8.Search");
 printf("\n9.Quit");
 printf("\nEnter your choice: ");
 {
 scanf("%d",&choice);
 }
 switch(choice)
 {
 case 1:printf("How many nodes you want:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 printf("Enter the element:");
	 scanf("%d",&m);
	 create_list(m);
	}
	 break;
 case 2:printf("Enter the element:");
	scanf("%d",&m);
	addatbeg(m);
	break;
 case 3:printf("\nEnter the element: ");
	scanf("%d",&m);
	printf("Enter the position after which this elemenet to be inserted: ");
	scanf("%d",&position);
	addafter(m,position);
	break;
 case 4:if(start==NULL)
	{
	 printf("\nList is empty");
	 continue;
	}
	 printf("Enter the element for deletion: ");
	 scanf("%d",&m);
	 del(m);
	 break;
 case 5:display();
	break;
 case 6:count();
	break;
 case 7:rev();
	break;
 case 8:
	printf("\nEnter the element to be searched: ");
	scanf("%d",&m);
	search(m);
	break;
 case 9:exit(0);
 default:printf("\nWrong choice");
	 }
       }
    }
	void create_list(int data)
	{
	 struct node*q,*temp;
	 temp=(struct node*)malloc(sizeof(struct node*));
	 temp->info=data;
	 temp->link=NULL;
	 if(start==NULL)
	   start=temp;
	   else{
	    q=start;
	    while(q->link!=NULL)
	    q=q->link;
	    q->link=temp;
	   }
	  }
	 void addatbeg(int data)
	  {
	   struct node*tmp;
	   tmp=(struct node*)malloc(sizeof(struct node));
	   tmp->info=data;
	   tmp->link=start;
	   start=tmp;
	  }
	 void  addafter(int data,int pos)
	   {
	    struct node*tmp,*q;
	    int i;
	    q=start;
	    for(i=0;i<pos-1;i++)
	    {
	     q=q->link;
	     if(q==NULL)
	     {
	      printf("There are less than %d elements",pos);
	      return;
	     }
	    }
	    tmp=(struct node*)malloc(sizeof(struct node*));
	    tmp->link=q->link;
	    tmp->info=data;
	    q->link=tmp;
	   }
	  void del(int data)
	    {
	     struct node*tmp,*q;
	     if(start->info==data)
	     {
	      tmp=start->link;
	      free(tmp);
	      return;
	     }
	     q=start;
	     while(q->link->link!=NULL)
	     {
	      if(q->link->info==data)
	      {
	       tmp=q->link;
	       q->link=tmp->link;
	       free(tmp);
	       return;
	      }
	      q=q->link;
	     }
	     if(q->link->info==data)
	     {
	      tmp=q->link;
	      free(tmp);
	      q->link=NULL;
	      return;
	     }
	      printf("Element %d not found\n",data);
	    }
	   void  display()
	     {
	      struct node*q;
	      if(start==NULL)
	      {
	       printf("Link is empty");
	       return;
	      }
	       q=start;
	       printf("List is :\n");
	       while(q!=NULL)
	       {
		printf("%d\n",q->info);
		q=q->link;
	       }
		printf("\n");
	       }
	       void count()
		{
		 struct node*q=start;
		 int cnt=0;
		 while(q!=NULL)
		 {
		  q=q->link;
		  cnt++;
		 }
		  printf("Number of elements are %d\n",cnt);
		}
	       void rev()

	       {
		struct node *p1,*p2,*p3;
		if(start->link==NULL)
		return;
		p1=start;
		p2=p1->link;
		p3=p2->link;
		p1->link=NULL;
		p2->link=p1;
		while(p3!=NULL)
		{
		 p1=p2;
		 p2=p3;
		 p3=p3->link;
		 p2->link=p1;
		}
		start=p2;
		}
	      void search(int data)
	       {
		struct node*ptr=start;
		int pos=1;
		while(ptr!=NULL)
		{
		 if(ptr->info==data)
		 {
		  printf("Item %d found at position %d \n",data,pos);
		  return;
		 }
		  ptr=ptr->link;
		  pos++;
		 }
		  if(ptr==NULL)

		  printf("Item %d not found in list\n",data);
		 }
