import java.util.*;
public class elementsearch
{
public static void main(String[]args)
{
int count,num,i;
int[] inputArray=new int[500];
Scanner sc=new Scanner(System.in);
System.out.println("enter any elements:");
count=sc.nextInt();
System.out.println("start to enter those" +count+ "elements:");
for(i=0;i<count;i++)
{
inputArray[i]=sc.nextInt();
}
System.out.println("enter the elements to be searched: ");
num=sc.nextInt();
for(i=0;i<count;i++)
{
if(num==inputArray[i])
{
System.out.println(num+" is present at index"+i+"!");
break;
}
}
if(i==count)
System.out.println(num+"is not present in the array!");
}
}
