#include <bits/stdc++.h> 
using namespace std; 
  
char findExtraCharcter(string strA, string strB) 
{ 
    unordered_map<char, int> m1; 
  
    for (int i = 0; i < strB.length(); i++) 
        m1[strB[i]]++; 
  
    for (int i = 0; i < strA.length(); i++) 
        m1[strA[i]]--; 
  
    for (auto h1 = m1.begin(); h1 != m1.end(); h1++) { 
   
        if (h1->second == 1) 
            return h1->first; 
    } 
} 
  
int main() 
{ 
    string strA = "abcd"; 
    string strB = "cbdad"; 
  
   
    cout << findExtraCharcter(strA, strB); 
} 
