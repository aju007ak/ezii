def nextPowerOf2(a): 
c= 0; 
if (a and not(a & (a - 1))): 
return a 
while( a != 0): 
a >>= 1
count += 1
return 1 << count; 
a= 0
print(nextPowerOf2(a))
