 #include <stdio.h>
 
 
int main()
{
    int a[100],i,n,l,s;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    s=l=a[0];
    for(i=1; i<n; i++)
    {
         if(s>a[i])
		  s=a[i];   
		   if(l<a[i])
		    s=a[i];       
    }
     printf("largest of array is : %d",l);
     printf("\nsmallest of array is : %d\n",s);
 
 
    return 0;
}
