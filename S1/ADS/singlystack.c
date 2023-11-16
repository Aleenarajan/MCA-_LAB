#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
  struct node*start;
  void push()
  {
   int x;
   struct node*ptr;
   ptr=malloc(sizeof(struct node));
    
    if(ptr==NULL)
    {
     printf("\n can't push element");
    }
    else
     {
     printf("\nEnter the value:");
     scanf("%d",&x); 
     
     if(start==NULL)
      {
        ptr->data=x;
        ptr->next=start;
        start=ptr;
      }
     }
  }

void pop()
 {
  int x;
  struct node*ptr;
  if(start==NULL)
   {
     printf("\nUnderflow");
   }
   else
    {
     x=start->data;
     ptr=start;
     start=start->next;
     free(ptr);
     printf("element popped-%d",x);
    }
 }
void traverse()
 {
  struct node*temp;
  if(start==NULL)
     printf("\n List is empty\n");
  else
    {
     temp=start;
     printf("The List is\n");
     while(temp!=NULL)
      {
        printf("%d-->",temp->data);
        temp=temp->next;
      }
    }
  }
void search()
 {
  int i=1,f=0,x;
  struct node*ptr;
  ptr=start;
  if(ptr==NULL)
   {
    printf("\nStck is empty");
   }
  else
   {
    printf("\nEnter element to be searched:");
    scanf("%d",&x);
    
    while(ptr!=NULL)
     {
       if(ptr->data==x)
        {
         f=1;
         break;
        }
        i++;
        ptr=ptr->next;
     }
     if(f==0)
      {
        printf("\n item not found");
      }
     else
       {
        printf("\nitem found at position %d",i);
       }
      }
 }      
void main()
{
  int ch=0;
  while(ch!=5) 
    {
      printf("\n\n1:push");
      printf("\n\n2:pop");
      printf("\n\n3:linear search");
      printf("\n\n4:display"); 
      printf("\n\n5:exit\n");
      printf("\nEnter your choice: ");
      scanf("%d",&ch);
      switch(ch)
       {
         case 1:push();
                break;
         case 2:pop();
                break;
         case 3:search(); 
                break;
         case 4:traverse();
                break;
         case 5:exit(0);
                break;
         default:printf("\ninvalid choice");
       }
     } 
}                           
         
          
  
  
              
    
      
