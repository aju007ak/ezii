 #include <bits/stdc++.h> 
using namespace std; 
void findNDigitNumsUtil(int a, int s, char* out, 
                        int i) 
{ 
    
    if (i>a||s< 0) 
        return; 
  
   
    if (i == a) 
    { 
        
        if(s == 0) 
        { 
            out[i] = ''; 
            cout << out << " "; 
        } 
        return; 
    } 
  
     
    for (int a = 0; a <= 9; a++) 
    { 
        
        out[i] = a + '0'; 
  
       
        findNDigitNumsUtil(a, s - i, out, i + 1); 
    } 
} 
 
void findNDigitNums(int a, int s) 
{ 
     
    char out[a + 1]; 
  
    
    for (int i = 1; i <= 9; i++) 
    { 
        out[0] = i + '0'; 
        findNDigitNumsUtil(n, s- i, out, 1); 
    } 
} 
  int main() 
{ 
    int a = 2, s = 3; 
  
    findNDigitNums(a, s); 
  
    return 0; 
} 
