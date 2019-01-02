def kLargest(a,b): 
 
    a.sort(reverse=True) 
   
    for i in range(b): 
        print (a[i],end=" ")  
  

a= [1, 23, 12, 9, 30, 2, 50] 

b = 3
kLargest(a,b) 
