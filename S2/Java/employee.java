
import java.util.*;
public class employee{
	
	    int[] eNo = new int[20];
	    int count,i,e;
	    String[] eName = new String[50];
	    float[] eSalary = new float[20];
	    
	    
	    void getinfo(int c){
	        Scanner s = new Scanner(System.in);
	        count=c;
	          for(i=0;i<c;i++){
	              System.out.println("Enter the Emp_No:");
	              eNo[i]=s.nextInt();
	              System.out.println("Enter the Emp_Name:");
	              eName[i]=s.next();
	              System.out.println("Enter the Emp_Salary:");
	              eSalary[i]=s.nextFloat();   
	        } 
	    }
	    
	    void printinfo(int c){
	        count =c;
	        System.out.println("Employee Information");
	        for(i=0;i<count;i++)
	        {
	           System.out.println("No:"+eNo[i]);
	           System.out.println("Name:"+eName[i]);
	           System.out.println("Salary:"+eSalary[i]);    
	        }       
	    }
	    
	    void displayinfo(int emp_no, int c) {
	    	int flag=0;
	    	e = emp_no;
	    	count = c;
	    	for(i=0;i<count;i++)
	    	{
	    		if(eNo[i]==e)
	    		{   
	    	    	System.out.println("No:"+eNo[i]);
	    	        System.out.println("Name:"+eName[i]);
	    	        System.out.println("Salary:"+eSalary[i]);
	    	        flag++;
	    		}
	    				
	    	} 
	    	if(flag==0)
	    		System.out.println("Record Not Found!");
	   }
	               
	    public static void main(String[] args){
	        employee obj = new employee();
	        Scanner sc = new Scanner(System.in);
	        System.out.println("Enter the number of records to be stored:");
	        obj.count = sc.nextInt();
	        obj.getinfo(obj.count);
	        obj.printinfo(obj.count);
	        System.out.println("\nTo check a specific record");
	        System.out.println("Enter the Emp_No:");
	        int e = sc.nextInt();
	        obj.displayinfo(e,obj.count);
	        sc.close();     
	    }   
	}
