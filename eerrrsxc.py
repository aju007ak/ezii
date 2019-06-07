import sys,string, math, itertools
from itertools import permutations,combinations

n,k = input().split()
n,k = int(n),int(k)
L1 = [ int(x) for x in input().split()]
#print(n,k, L1)
L2 = list(combinations(L1,k))
#print(L2)
L2 = list(itertools.combinations_with_replacement(L1,k))
#print(L2)
L3 = []
for x in L2 :
    sum1 = sum(x)
    if sum1 not in L3 :
        L3.append(sum1)
L3.sort()
print(*L3)) 
