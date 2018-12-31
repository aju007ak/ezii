def isSub(a,b,s): 
if s== 0: 
return True
if b== 0 and s!= 0: 
return False
if a[b-1] > s: 
return isSub (a, b-1, s) 
return isSub (a, b-1, s) or isSub (a, b-1, s-a[b-1]) 
def findPartion (a,b): 
s= 0
for i in range(0,b): 
s+= a[i] 
if s% 2 != 0: 
return false 
return isSub(a,b, s// 2) 
a= [3, 1, 5, 9, 12] 
b= len(a) 
if findPartion(a,b) == True: 
print ("Can be divided into two subsets of equal sum") 
else: 
    print ("Can not be divided into two subsets of equal sum")
