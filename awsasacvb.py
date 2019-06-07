import sys, string, math
L = input().split(' ')
L3 = []
for s in L :
    L3.append(s[::-1])
print(*L3)
