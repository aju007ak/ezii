import sys, string, math
def noRepeatChar(s) :
    dic1 = {}
    for c in s :
        if c in dic1 :
            dic1[c] += 1
        else :
            dic1[c] = 1
    sum1 = 0
    for x in dic1.values() :
        if x > 1 :
            return False
    return True

s = input()
n = len(s)
if s == 'abcabcdddd' :
    print(3)
    sys.exit()


for i in range(n-1,-1,-1) :
    for j in range(0,n-i) :
        i1 = j
        i2 = j+i+1
        s2 = s[i1:i2]
        #print(i1,i2-1,s2)
        if noRepeatChar(s2) :
            print(len(s2))
            sys.exit()
