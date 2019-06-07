import sys,string, math, itertools

a = int(input())
b = 3
c = b
while a > 0 :
    if c == 0 :
        b = 2*b
        c = b
    if a==1 :
        print(c)
        sys.exit()
    a -= 1
    c -= 1
