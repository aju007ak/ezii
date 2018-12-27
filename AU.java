class AU
{ 
static boolean isPowerOfTwo(int i) 
{ 
return (int)(Math.ceil((Math.log(i) / Math.log(2)))) ==  
       (int)(Math.floor(((Math.log(i) / Math.log(2))))); 
} 
public static void main(String[] args) 
{ 
    if(isPowerOfTwo(31)) 
    System.out.println("Yes"); 
    else
    System.out.println("No"); 
      
    if(isPowerOfTwo(64)) 
    System.out.println("Yes"); 
    else
    System.out.println("No"); 
} 
} 
