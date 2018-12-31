def answer_query(a,b,c,d): 
  

    count = 0
    for i in range(c,d): 
        if (a[i] == a[i + 1]): 
            count += 1
  
    return count 
  

a = [1, 2, 2, 2, 3, 3, 4, 4, 4]  
n = len(a) 
  
 
C = 1
D = 8
print(answer_query(a,b,C,D)) 
  

C = 0
D = 4
print(answer_query(a,b,C, D)) 
