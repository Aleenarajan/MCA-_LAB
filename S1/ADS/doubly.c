#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *prev;
  struct node *next;
};
struct node *start;
void beginsert()
 {
   struct node*ptr;
   int x;
   ptr=(struct node*)malloc(sizeof(struct node));
   if(ptr==NULL)
   {
      printf("\nOverflow");
   }
   else
   {
      printf("\nEnter value :");
      scanf("%d",&x);
      if(start==NULL)
      {
       ptr->data=x;
       ptr->prev=NULL;
       ptr->next=NULL;
       start=ptr;
      }
      else
      {
      ptr->data=x;
      ptr->prev=NULL;
      ptr->next=start;
      start->prev=ptr;
      start=ptr;
    }
 }
}
void lastinsert()
 {
  struct node*ptr,*temp;
  int x;
  ptr=(struct node*)malloc(sizeof(struct node));
  if(ptr==NULL)
   {
    printf("\nOverflow");
   }
   else
   {
   printf("\nEnter value:");
   scanf("%d",&x);
   ptr->data=x;
   if(start==NULL)
   {
      ptr->next=NULL;
      ptr->prev=NULL;
      start=ptr;
   }
   else
   {
      temp=start;
      while(temp->next!=NULL)
      {
         temp=temp->next;
      }
      temp->next=ptr;
      ptr->prev=temp;
      ptr->next=NULL;
   }
 }
}  
void posinsert()
 {
  int pos,i,x;
  struct node*ptr,*temp;
  ptr=(struct node*)malloc(sizeof(struct node));
  if(ptr==NULL)
   {
    printf("\nOverflow");
   }
   else
   {
    printf("\nEnter value:");
    scanf("%d",&x);
    ptr->data=x;
    printf("\nEnter the position:");
    scanf("%d",&pos);
    temp=start;
    if(pos==1) 
    {
      if(start==NULL)
      {
       ptr->data=x;
       ptr->prev=NULL;
       ptr->next=NULL;
       start=ptr;
    } 
   else
   {
     ptr->data=x;
     ptr->prev=NULL;
     ptr->next=start;
     start->prev=ptr;
     start=ptr;
   }
  }
  else
   { 
    for(i=1;i<=pos-1;i++)
     {
      temp=temp->next;
      if(temp==NULL)
      {  
         printf("\nCan't insert");
         return;
      }
     }
     ptr->next=temp->next;
     if(temp->next!=NULL)
      {
       temp->next->prev=ptr;
       }
     temp->next=ptr;
     ptr->prev=temp;
   }
 }
}
void begdel()
{
  int x;
  struct node*ptr;
  if(start==NULL)
  {
   printf("\nlist is empty");
  }
  else
  {
    ptr=start;
    start=ptr->next;
    start->prev=NULL;
    x=ptr->data;
    free(ptr);
    printf("\n%d deleted",x);
  }
}
void lastdel()
 {
  int x;
  struct node *ptr,*ptr1;
  if(start==NULL)
  {
    printf("\nList is empty");
  }
  else if(start->next==NULL)
  {
   x=start->data;
   start=NULL;
   free(start);
   printf("\n%d deleted",x);
  }
  else
  {
   ptr=start;
   while(ptr->next!=NULL)
    {
      ptr1=ptr;
      ptr=ptr->next;
    }
    ptr1->next=NULL;
    ptr->prev=NULL;
    x=ptr->data;
    free(ptr);
    printf("\n%d deleted",x);
  }
 }
void posdel()
{
 struct node *ptr, *ptr1;
 int pos,i,x;
 ptr=start;
  
 if(ptr==NULL)
  {
   printf("\nList is empty");
  }
  else
  {
    printf("\nEnter position :");
    scanf("%d",&pos);
    if(pos==1)
     {
      ptr=start;
      start=ptr->next;
      start->prev=NULL;
      x=ptr->data;
      free(ptr);
      printf("\n%d deleted",x);
     }
     else
     {
       for(i=1;i<pos;i++)
        {
          ptr1=ptr;
          ptr=ptr->next;
          if(ptr==NULL)
          {
            printf("\nCan't deleted");
            return;
          }
        }
        ptr1->next=ptr->next;
        (ptr->next)->prev=ptr1;
        x=ptr->data;
        free(ptr);
        printf("\n%d deleted",x);
    }
  }
}
void search()
{
 struct node*ptr;
 int x,i=0,f;
 ptr=start;
 if(ptr==NULL)
  { 
    printf("\nList is empty");
  }
  else
  {
    printf("\nEnter element to search:");
    scanf("%d",&x);
    while(ptr!=NULL) 
     {
       if(ptr->data==x)
        {
          printf("\nItem found at position %d",i+1);
          f=0;
          break;
        }
        else
        {
          f=1;
        }
        i++;
        ptr=ptr->next;
     }
     if(f==1)
     {
       printf("\nItem not found");
     }
  }
}
void display()
{
  struct node *ptr;
  ptr=start;
  if(ptr==NULL)
   {
     printf("\nList is empty");
   }
   else
   {
     while(ptr!=NULL)
      {
        printf("%d->",ptr->data);
        ptr=ptr->next;
      }
      printf("null");
   }
}
void main()
{
  int ch;
  while(ch!=9)
    {
     printf("\n\n1:insert at beginning");
     printf("\n2:insert at last");
     printf("\n3:insert at position");
     printf("\n4:delete at beginning");
     printf("\n5:delete from last");
     printf("\n6:delete from position");
     printf("\n7:search");
     printf("\n8:display");
     printf("\n9:Exit");
     printf("\n\Enter your choice :");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:beginsert();
              break;
       case 2:lastinsert();
              break;
       case 3:posinsert();
              break;
       case 4:begdel();
              break;
       case 5:lastdel();
              break;
       case 6:posdel();
              break;
       case 7:search();
              break;
       case 8:display();
              break;
       case 9:exit(0);
              break;
       default:printf("\nInvaild choice");
      }
   }
}     
    
       
 
        
     
 
          
     
 
  
   
    
