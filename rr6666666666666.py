import sys,string, math, itertools

s1, s2 = input().split()
n = len(s1)
for j in range(1,0,-1) :
    #print('arr len = ', j+1)
    for i in range(0,n-j) :
        li, ri = i,j+i
        s3 = s1[li:ri + 1]
        #print(li, ri, s3)
        if s3 in s2 :
            print('yes')
            sys.exit()
print('no')
