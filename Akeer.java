import java.io.*; 
import java.lang.*; 
  
class Akeeer  
{ 
    public static int Nth_of_AP(int b,  
                                int c,  
                                int A) 
    {  
        
        return ( b + (A - 1) * c ); 
    } 
  
     
    public static void main(String[] args)  
    {  
        
        int b = 2;  
          
         
        int c = 1;  
          
        
        int A = 5;  
  
        
        System.out.print("The "+ A +  
                         "th term of the series is : " + 
                          Nth_of_AP(b, c, A)); 
    } 
} 
