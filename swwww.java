import java.io.*; 
import java.util.*; 
public class Arr
{ 
static void sortit(int []a, int b) 
{ 
for (int i = 0; i < b; i++)  
{ 
a[i]=i+1; 
} 
} 
public static void main(String args[]) 
{
int []a= {10, 7, 9, 2, 8,3, 5, 4, 6, 1}; 
int b = a.length; 
sortit(a,b); 
for (int i = 0; i < b; i++)  
System.out.print(a[i] + " ");  
    } 
} 
