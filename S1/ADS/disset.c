#include<stdio.h>
#include<stdlib.h>
struct node
{
 struct node*rep;
 struct node*next;
 int data;
}
*head[50],*tails[50];
static int countroot=0;
void makeset(int x)
{
 struct node*new=(struct node*)malloc(sizeof(struct node));
 new->rep=new;
 new->next=NULL;
 new->data=x;
 heads[countroot]=new;
 tails[countroot]=new;
}
struct node*find(int a)
{
 int i;
 struct node*tmp=(struct node*)malloc(sizeof(struct node));
 for(i=0;i<countroot;i++)
 {
  tmp=heads[i];
  while(tmp!=NULL)
 { 
   if(tmp->data==a)
 	return tmp->rep;
   tmp=tmp->next;
}
}
return NULL;
}
void unionsets(int a,int b)
{
 int i,pos,flag=0,j;
 struct node*tails2=(struct node*)mallac(sizeof(struct node));
struct node*rep1=find(a);
struct node*rep2=find(b);
if(rep1==NULL||rep2==NULL)
{
  printf("\nNot present");
  return;
}
if(rep1!=rep2)
{
 for(j=0;j<countroot;j++)
{
  if(heads[j]==rep2)
{
  pos=j;
  flag=1;
  countroot-=1;
  tails=tails[j];
  for(i=pos;i<countroot;i++)
{
 heads[i]=heads[i+1];
 tails[i]=tails[i+1];
}
}
if(flag==1)
 break;
}
for(j=0;j<countroot;j++)
{
 if(heads[j]==rep1)
{
 tails[j]->next=rep2;
 tails[j]=tail2;
 break;
}
}
while(rep2!=NULL)
{
 rep->rep=rep1;
 rep=rep2->next;
}
}
}
int search(int x)
{
 int i;
 struct node*tmp=(struct node*)malloc(sizeof(struct node));
 for(i=0;i<countroot; i++)
    tmp=heads[i];
    if(heads[i]->data==x)
         return 1;
    while(tmp!=NULL)
{
   if(tmp->data==x)
     return 1;
   tmp=tmp->next;
}
}
return 0;
}
void main()
{
int c,x,y,i;
struct node*rep=(struct node*)malloc(sizeof(struct node));
while(1)
{
 printf("\n\n1.Make Set");
 printf("\n2.display set representives");
 printf("\n3.union");
 printf("\n4.Find set");
 printf("\n5.Exit");
 printf("\nEnter your choice:");
 scanf("%d",&c);
 switch(c)
{
 case 1:printf("Enter element:");
        scanf("%d",&x);
        if(search(x)==1)
		printf("\n Element already present");
	else:
	  	makeset(x);
		break;
case 2:printf("the sets are\n");


