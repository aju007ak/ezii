#include <stdio.h> 
  

int largest(int arr[], int a) 
{ 
 int i; 
  int max = arr[0];   
 for (i = 1; i < a; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
} 
  
int main() 
{ 
    int arr[] = {10, 324, 45, 90, 9808}; 
    int a = sizeof(arr)/sizeof(arr[0]); 
    printf("Largest in given array is %d", largest(arr, a)); 
    return 0; 
} 
