
class AKKK 
{ 
    static final int MAX=1000000; 
      
    
    static boolean []prime=new boolean[MAX + 1]; 
      
    
    static int []sum=new int[MAX + 1]; 
      
    
    static void SieveOfEratosthenes() 
    { 
        / 
        for(int i=0;i<=MAX;i++) 
            prime[i]=true; 
              
         for(int i=0;i<=MAX;i++) 
            sum[i]=0; 
          
        prime[1] = false; 
      
        for (int p = 2; p * p <= MAX; p++) { 
      
            
            if (prime[p]) { 
      
               
                for (int i = p * 2; i <= MAX; i += p) 
                    prime[i] = false; 
            } 
        } 
      
        
        for (int i = 1; i <= MAX; i++) { 
            if (prime[i] == true) 
                sum[i] = 1; 
      
            sum[i] += sum[i - 1]; 
        } 
    } 
      
   
    public static void main(String []args) 
    { 
        
        SieveOfEratosthenes(); 
      
       
        int l = 3, r = 9; 
      
       
        int c = (sum[r] - sum[l - 1]); 
      
        
        System.out.println("Count: " + c);  
      
    } 
  
} 
