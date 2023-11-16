#include<stdio.h>
void main()
{
int arr[10];
int s,l,i,n;
printf("Emter the size of the array:");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
printf("Array elements are");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
printf("\n");
}
for(i=0;i<n;i++)
{
if(arr[i]<arr[i-1])
{
s=arr[i];
}
if(arr[i]>arr[i-1])
{
l=arr[i];
}
}
printf("Smallest element is %d\n",s);
printf("Largest element is %d\n",l);
}
