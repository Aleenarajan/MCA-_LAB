import java.util.*;
 class Publisher
{
    String name;
    Scanner sc=new Scanner(System.in);
  public Publisher()
{
    System.out.println("ENTER THE DETAILS");
    System.out.println("enter the name");
    name = sc.next();
    }  
}
class book extends Publisher
{
    int bid;
    String company_name;
    int price;
   Scanner em= new Scanner(System.in);
   public book()
   {
    System.out.println("enter the id");
    bid = em.nextInt();
    System.out.println("enter the company name");
   company_name = em.next();
    System.out.println("enter price");
    price = em.nextInt();
   } 
}
class lict extends book
{
    String type;
    String discription;
    Scanner tr = new Scanner(System.in);
    public  void get()
    {
    System.out.println("emter the details of lictrature books");
    System.out.println("enter the type");
    type = tr.next();
    System.out.println("enter the discription");
    discription = tr.next();
    
    }
    public void display()
    {
   System.out.println("------* details*-------");
   System.out.println("The name of book:"+name);
   System.out.println("The book id:"+bid);
   System.out.println("publlished by:"+company_name);
   System.out.println("price:"+price);
   System.out.println("category:"+type);
   System.out.println("about book:"+discription);
    } 
}
class fict extends book
{
    String ftype;
    String fdiscription;
    String fauother;
    Scanner fi = new Scanner(System.in);
    public  void get()
    {
    System.out.println("emter the details of fiction books");
    System.out.println("enter the type");
    ftype = fi.next();
    System.out.println("enter the discription");
    fdiscription = fi.next();
   
    }
    public void display()
    {
   System.out.println("------* details*-------");
   System.out.println("The name of book:"+name);
   System.out.println("book id :"+bid);
   System.out.println("published company:"+company_name);
   System.out.println("price:"+price);
   System.out.println("category:"+ftype);
   System.out.println("about book:"+fdiscription);
  
    } 
}
 public class Dispbook
 {
public static void main(String[] args)
 {
 
 System.out.println("Enter type of book ");
 System.out.println("1.licterature:");
   System.out.println("2.fiction:");
   System.out.println("enter the choice:");
   Scanner pc =new Scanner(System.in);
   int choice=pc.nextInt();
   switch(choice)
   {
       case 1: System.out.println("licterature books");
       lict a =new lict();
       a.get();
       a.display();
       break;
       case 2: System.out.println("fiction books");
       fict b =new fict();
       b.get();
       b.display();
       break;
       default:
       System.out.println("invalid choice");
       break;      
   }
 
  }
}
