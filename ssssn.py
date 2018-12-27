def countOccurrences (a,N): 
b= len(s) 
f1 = 0
f2 = 0
F= 0
for i in range(b): 
if a[i] == 'v': 
f1+= 1 
if s[i] == 'u': 
f2+= 1 
F+= f1  
return F
S = "vuvc"
N= 2
print (countOccurrences(a, N)) 
