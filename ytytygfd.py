import sys,string

n,k = input().split()
n,k = int(n),int(k)
L1 = [ int(x) for x in input().split()]
L2 = [ int(x) for x in input().split()]
max1 = 0
for i in range(0,n) :
    L3 = L2[:]
    L3[i] += k
    L4 = []
    for j in range(0,n) :
        L4.append(L3[j]//L1[j])
    min1 = min(L4)
    if min1 > max1 :
        max1 = min1
print(max1)
