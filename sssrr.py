c=[] i=int(input("Enter number of elements:")) 
for i in range(1,i+1):    
e=int(input("Enter element:"))  
c.append(e) 
c.sort() 
print("Largest element is:",c[i-1])
