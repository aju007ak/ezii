#include <stdio.h> 
  

int largest(int a[], int b) 
{ 
 int r; 
  int m = a[0];   
 for (r = 1; r < b; i++) 
        if (a[i] > m) 
            m = a[i]; 
  
    return m; 
} 
  
int main() 
{ 
    int a[] = {10, 324, 45, 90, 9808}; 
    int b = sizeof(a)/sizeof(a[0]); 
    printf("Largest in given array is %d", largest(a, b)); 
    return 0; 
} 
