def printTwoElements( a, s): 
    for i in range(s): 
        if a[abs(a[i])-1] > 0: 
            a[abs(a[i])-1] = -a[abs(a[i])-1] 
        else: 
            print("The repeating element is", abs(a[i])) 
              
    for i in range(s): 
        if a[i]>0: 
            print("unique", i + 1) 
  
 
a = [7, 3, 4, 5, 5, 6, 2] 
n = len(a) 
printTwoElements(a, n) 
