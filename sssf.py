def findNext(num,a): 
for v in range(a-1,0,-1): 
if number[v] > number[v-1]: 
break
if v == 0: 
print "Next number not possible"
return
c = number[v-1] 
smallest = v 
for u in range(v+1,n): 
if number[u] > x and number[u] < number[smallest]: 
smallest = u 
number[smallest],number[v-1] = number[v-1], number[smallest] 
x = 0
for u in range(i): 
x = x * 10 + number[u] 
number = sorted(number[v:]) 
for u in range(n-i): 
x = x * 10 + number[u]    
print "Next number with set of digits is",x 
digits = "534976"         
num = map(int ,digits)  
findNext(num, len(digits)) 
