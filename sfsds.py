def isComposite(a): 
  
    
    if (a <= 1): 
        return False
    if (a <= 3): 
        return False
  
    
    if (a % 2 == 0 or a % 3 == 0): 
        return True
    i = 5
    while(i * i <= a): 
          
        if (a % i == 0 or a % (i + 2) == 0): 
            return True
        i = i + 6
          
    return False

  
print("true") if(isComposite(11)) else print("false") 
print("true") if(isComposite(15)) else print("false")
