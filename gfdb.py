import sys, string, math
n,k = map(int,input().split())
L = list(map(int,input().split()))
L2 = sorted(L,reverse=True)
x = L2[0]
L3 = [L2[0]]
if k == 1 :
    print(L2[0])
    sys.exit()
for i in range(0,len(L)-1) :
    if L2[i] != L2[i+1] :
        L3.append(L2[i+1])
print(L3[k-1])
