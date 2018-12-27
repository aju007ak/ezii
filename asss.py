a= input("Enter file name: ")
b = 0
with open(a, 'c') as a:
for line in a:
words = line.split()
for d in words:
for letter in d:
if(letter.isspace):
b=b+1
print("Occurrences of blank spaces:")
print(b)
