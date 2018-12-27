#include <stdio.h> 
 
 

int largest(int s[], int p) 

{ 
 int r; 
  
int m = s[0];  
 
 for (r = 1; r < p; r++) 
     
   if (a[r] > m) 
           
 m = a[r]; 
  
    
return m; 

} 
  

int main() 

{ 
    
int a[] = {10, 324, 45, 90, 9808}; 
   
 int p = sizeof(a)/sizeof(a[0]); 
  
  printf("Largest in given array is %d", largest(a, p)); 
 
   return 0; 

} 
