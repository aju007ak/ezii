#include <iostream> 
using namespace std; 
  
void isKthBitSet(int i, int a) 
{ 
    if (i & (1 << (a - 1))) 
        cout << "SET"; 
    else
        cout << "NOT SET"; 
} 
   
int main() 
{ 
    int i= 5, a= 1; 
    isKthBitSet(i,a); 
    return 0; 
} 
