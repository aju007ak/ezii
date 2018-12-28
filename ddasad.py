def printAllKLength(s,a): 
a= len(s)  
printAllKLengthRec(set, "",a,a) 
def printAllKLengthRec(set, prefix, n,a): 
if (a == 0) : 
print(prefix) 
return
for i in range(n): 
newPrefix = prefix + set[i] 
printAllKLengthRec(set, newPrefix, n, a- 1) 
if __name__ == "__main__": 
print("First Test") 
set1 = ['a', 'b'] 
k = 3
printAllKLength(set1, a) 
print("\nSecond Test") 
set2 = ['a', 'b', 'c', 'd'] 
k = 1
printAllKLength(set2, a) 
  
