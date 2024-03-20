class product1
{
String pcode;
String pname;
int price;
product1(String c,String n,int p)
{
pcode =c;
pname=n;
price =p;
}
}
class product{
public static void main(String args[]){
product1 prod1=new product1("a11","aust",200);
product1 prod2=new product1("a12","alam",500);
product1 prod3=new product1("a13","nirmal",1000);
if(prod1.price<prod2.price&&prod1.price<prod3.price){
System.out.println(prod1.pname+" has lesser price");
}
else if(prod2.price <prod3.price)
{
System.out.println(prod2.pname+" has lesser price");
}else
{
System.out.println(prod3.pname+" has lesser price");
}}}


