
def round( a ): 
  

    b = (a // 10) * 10
      
  
    c = a + 10
      
    
    return (b if a - a > c - a else b) 
  

a = 3255
print(round(a)) 
