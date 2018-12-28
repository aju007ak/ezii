#include<bits/stdc++.h> 
using namespace std; 
  
void splitString(string str) 
{ 
    string a, n, s; 
    for (int i=0; i<str.length(); i++) 
    { 
        if (isdigit(str[i])) 
            num.push_back(str[i]); 
        else if((str[i] >= 'A' && str[i] <= 'Z') || 
                (str[i] >= 'a' && str[i] <= 'z')) 
            alpha.push_back(str[i]); 
        else
            special.push_back(str[i]); 
    } 
  
    cout << a << endl; 
    cout << n<< endl; 
    cout << s << endl; 
} 
  

int main() 
{ 
    string str = "hi all"; 
    splitString(str); 
    return 0; 
} 
