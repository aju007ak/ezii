#include <bits/stdc++.h> 
#define ull unsigned long long int 
using namespace std; 
const int U = 8*sizeof(ull); 
bool isComplementAnagram(ull a) 
{ 
ull b = ~a;
bool binary_a[U] = { 0 }; 
for (int i=0; a > 0; i++) 
{ 
binary_a[i] = a % 2; 
a /= 2; 
} 
bool binary_b[U] = { 0 }; 
for (int i=0; b > 0; i++) 
{ 
binary_b[i] = b % 2; 
b /= 2; 
} 
sort(binary_a, binary_a + U); 
sort(binary_b, binary_b + U); 
for (int i = 0; i < U; i++) 
if (binary_a[i] != binary_b[i]) 
return false; 
return true; 
} 
int main() 
{ 
ull a = 5156454; 
cout << isComplementAnagram(a) << endl; 
return 0; 
} 
