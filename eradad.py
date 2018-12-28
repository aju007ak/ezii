import math 
  
def isPerfectSquare(a): 
  
   
    sr = math.sqrt(a) 
   
    
    return ((sr - math.floor(sr)) == 0) 

  
a = 2500
if (isPerfectSquare(a)): 
    print("Yes") 
else: 
    print("No") 
