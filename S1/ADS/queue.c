#include<stdio.h>
#include<stdlib.h>
int [0],front=-1,rear=-1,n;
void insert();
void display();
void del();
void search();
void main()
{
 int ch;
 printf("enter the size of the queue:");
 scanf("%d",&n);
 while(1)
  {
    printf("\n\n1.insertion");
    printf("\n2.deletion");
    printf("\n3.display");
    printf("\n4.search");
    printf("\n5.exit");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    
    switch(ch)
     {
       case 1:insert();
              break;
       case 2:del();
              break;
       case 3:display();
              break;
       case 4:search();
              break;
       case 5:printf("\npress any key to exit.");
              exit(0)
       default:printf("\ninvalid choice");
     }
  }
  return 0;
}
void insert() 
 {
  int x;
  if((front==0 && rear==n-1)||(front==rear+1))
   
