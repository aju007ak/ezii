import sys,string, math, itertools

a1, a2 = input().split()
n = len(a1)
for j in range(1,0,-1) :
    #print('arr len = ', j+1)
    for i in range(0,n-j) :
        li, ri = i,j+i
        a3 = a1[li:ri + 1]
        #print(li, ri, a3)
        if a3 in a2 :
            print('yes')
            sys.exit()
print('no')
