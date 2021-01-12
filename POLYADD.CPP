#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
float coef;
int expo;
struct node*link;
};
 struct node*poly_add(struct node*,struct node*);
 struct node*enter(struct node*);
 struct node*insert(struct node*,float,int);
 voi
 void main()
 {
  struct node*p1_start,*p2_start,*p3_start;
  p1_start=NULL;