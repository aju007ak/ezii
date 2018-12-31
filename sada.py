def findSingle(a,b): 
      
    r= a[0] 
      

    for i in range(1,b): 
        r= r ^ a[i] 
      
    return r 
  a = [2, 3, 5, 4, 5, 3, 4] 
print "Element occuring once is", findSingle(a, len(a))
