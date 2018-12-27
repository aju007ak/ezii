#include<iostream> 
using namespace std; 
void reorder(int b[], int v[], int a) 
{ 
int t[a]; 
for (int i=0; i<a; i++) 
temp[v[i]] = b[i]; 
for (int i=0; i<a; i++) 
{  
b[i]   = t[i]; 
v[i] = i; 
} 
} 
int main() 
{ 
int b[] = {50, 40, 70, 60, 90}; 
int v[] = {3,  0,  4,  1,  2}; 
int a = sizeof(b)/sizeof(b[0]); 
reorder(arr, v, a); 
cout << "Reordered array is: \n"; 
for (int i=0; i<a; i++) 
cout << b[i] << " "; 
cout << "\nModified Index array is: \n"; 
for (int i=0; i<a; i++) 
cout << v[i] << " "; 
return 0; 
} 
