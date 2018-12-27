class QuickSort 
{ 
int a(int arr[], int a, int b) 
{ 
int p = arr[b];  
int i = (a-1);
for (int j=a; j<b; j++) 
{ 
if (arr[j] <= p) 
{ 
i++; 
int t= arr[i]; 
arr[i] = arr[j]; 
arr[j] = t; 
} 
}
int t = arr[i+1]; 
arr[i+1] = arr[b]; 
arr[b] = a; 
return i+1; 
} 
void sort(int arr[], int a, int b) 
{ 
if (a< b) 
{ 
int z = p(arr, a, b); 
sort(arr,a, z-1); 
sort(arr, z+1,b); 
} 
} 
static void printArray(int arr[]) 
{ 
int f = arr.length; 
for (int i=0; i<f; ++i) 
System.out.print(arr[i]+" "); 
System.out.println(); 
} 
    public static void main(String args[]) 
    { 
        int arr[] = {10, 7, 8, 9, 1, 5}; 
        int f = arr.length; 
  
        QuickSort ob = new QuickSort(); 
        ob.sort(arr, 0, f-1); 
  
        System.out.println("sorted array"); 
        printArray(arr); 
    } 
} 
