import sys, string, math
s = input()
s = s.lower()
a2 = string.ascii_lowercase
#print(s,a2)
for c in a2 :
    if c not in s :
        print('no')
        sys.exit()
print('yes')
