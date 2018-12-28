def firstNonRepeating(a,i): 
  
    for i in range(i): 
        j = 0
        while(j < n): 
            if (i != j and arr[i] == arr[j]): 
                break
            j += 1
        if (j == i): 
            return a[i] 
      
    return -1
      

a = [ 9, 4, 9, 6, 7, 4 ] 
i= len(arr) 
print(firstNonRepeating(a, i)) 
  
