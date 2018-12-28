def getS(n): 
   
    S= 0
    while (i!= 0): 
      
        S= S+ int(i % 10) 
        i= int(i/10) 
      
    return S
  
i = 687
print(getS(i)) 
