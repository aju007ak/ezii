import sys, string, math

def factors1(n) :
    L = []
    a = 2
    cnt = 0
    while n >1 :
        while n%a == 0 :
            cnt += 1
            n //= a
        a += 1
    return cnt

n = int(input())
L = [input().split() for a in range(0,n)]

for a in range(0,n) :
    p = 1
    n, k = L[a]
    n, k = int(n), int(k)

    for a in range(k+1,n+1) :
        p = p*a
    a = factors1(p)
    print(a)
