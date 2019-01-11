def round( n ): 
  
    # Smaller multiple 
    a = (n // 10) * 10
      
    # Larger multiple 
    b = a + 10
      
    # Return of closest of two 
    return (b if n - a > b - n else a) 
  
# driver code 
n = 4722
print(round(n)) 
