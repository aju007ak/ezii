import sys,string, math, itertools

s1 = input()
L = s1.split('|')
s = input()
#print(L,s)
n1 = abs(len(L[0])-len(L[1]))
#print(n1)
if n1==0 :
    print('Impossible')
    sys.exit()
if n1 != len(s) :
    print('Impossible')
    sys.exit()
if len(s) >= n1 :
    if len(L[0]) < len(L[1]) :
        s2 = L[0] + s + '|' + L[1]
    else :
        s2 = L[0] + '|' + L[1] + s
    print(s2)
else :
    print('Impossible')
