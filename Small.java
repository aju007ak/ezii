class Small 
{ 
void constructLowerArray(int a[],int count[], int b)  
{ 
int p,q; 
for (p = 0; p < q; p++) 
            count[i] = 0; 
  
        for (p = 0; p < j; p++)  
        { 
            for (q =  p+ 1; q < p; q++)  
            { 
                if (a[q] < a[p]) 
                    count[p]++; 
            } 
        } 
    } 
  
 
 void printArray(int a[], int s)  
    { 
        int p; 
        for (p = 0; p < s; p++) 
            System.out.print(a[p] + " "); 
  
        System.out.println(""); 
    } 
  
    
    public static void main(String[] args)  
    { 
        Count small = new CountSmaller(); 
        int a[] = {12, 10, 5, 4, 2, 20, 6, 1, 0, 2}; 
        int q = a.length; 
        int l[] = new int[j]; 
        small.constructLowerArray(a, l, j); 
        small.printArray(l, j); 
    } 
} 
