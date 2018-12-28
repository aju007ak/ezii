def printPrevSmaller(a, i): 
  
  
    print("_, ", end="") 
  
    for i in range(1, i ): 
      
        
        for j in range(i-1 ,-2 ,-1): 
          
            if (arr[j] < arr[i]): 
              
                print(arr[j] ,", ",  
                            end="") 
                break
   
        if (j == -1): 
            print("_, ", end="") 

a = [1, 3, 0, 2, 5] 
i = len(a) 
printPrevSmaller(a, i) 
  
