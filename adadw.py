def countMultiples(a): 
    r= 0; 
    for i in range(1,a + 1): 
        if (i % 3 == 0 or i % 7 == 0): 
            r+= 1; 
   
    return r; 
  
-
print("C=", countMultiples(20)); 
  
