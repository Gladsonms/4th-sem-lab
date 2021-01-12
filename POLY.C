#include<stdio.h>
#include<malloc.h>
struct node;
{
float coeff;
float expo;
struct node*link;
};
struct node*poly_add(struct node*,struct node*);
struct node*enter(struct node*);
struct node*insert(struct node* float,int);
main()
{
struct node*p1_start,p2_start,p3_start;
p1_start=NULL;
p2_start=NULL;
p3_start=NULL;
printf("\n Polynomiial 1:");
p1_start=enter(p1_start);
printf("\n Polynomial 2 :");
p2_start=enter(p2_start);
p3_start=poly_add(p1_start,p2_start);
printtf("\n Polynomial 1 is:");
display(p2_start);
printf("\n Polynomial 2 is :");
display(p2_start);
printf("\n Added Polynomial is:");
display(p3_start);
}
struct node*enter(struct node *start)
int i,n,ex;
float co;
printf("\n How many terms you want to enter:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n The coefficent term %d",i);
scanf("%f",&co);
printf("\n The exponent term is %d",i);
scanf("%d",&ex);
start=insert(start,co,ex);
return start;
{
struct node insert (struct node *start,float co,int ex)
{
start node *ptr,*tmp;
tmp=malloc(sizeof(struct node));
tmp->expo=ex;
if(start==NULL||&&ptr->link->expo>ex)
ptr=ptr->link;
tmp->link=ptr->link;
ptr->link=tmp;
if(ptr->link==NULL)
tmp->link=NULL;
}
return start;
}
struct node*poly_add(struct node *p1,struct node *p2)
{
struct node *p3_start,*p3,*tmp;
p3_start=NULL;
if(p1==NULL&&p2!=NULL)
return p3_start;
while(p1!=NULL&&p2!=NULL)
tmp=malloc(sizeof(struct node));
if(p3_start=NULL)
{
p3_start=tmp;
p3=p3_start;
}
else
{
p3->link=tmp;
p3=p3->link;
}
if(p1->expo>p2->expo)
{
tmp->coef=p1->coef;
tmp->expo=p1->expo;
p1=p1->link;
}
else if(p1->expo==p2->expo)
{
tmp->coef=p1->coef+p2->coef;
tmp->expo=p1->expo;
p1=p1->link;
p2=p2->link;
}
}
while(p1!=NULL;
{
tmp=malloc(sizeof(struct node));
tmp->coef=p1->coef;
tmp->expo=p1->expo;
if(p3_start==NULL)
{
p3_start=tmp;
p3=p3_start;
}
else
{
p3->link=tmp;
p3=p3_start;
}
p1=p1->link;
}
while(p2!=NULL)
{
tmp=malloc(sizeof(struct node);
tmp->coef=p2->coef;
tmp->expo=p2->expo;
if(p3_start==NULL)
{
p3_start!=tmp;
p3=p3_start;
}
else
{
p3->link=tmp;
p3=p3->link;
}
p2=p2->link;
}
p3->link=NULL;
return p3_start;
}
display(struct5 node *ptr)
{
if(ptr==NULL)
{
printf("\n empty");
return;
}
while(ptr!=NULL)
{

printf("\n