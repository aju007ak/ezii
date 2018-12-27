bname = input("Enter file name: ")
v = 0
 
with open(bname, 'n') as b:
    for line in b:
        w = line.split()
        for g in words:
            for letter in g:
                if(letter.isspace):
                    v=v+1
print("Occurrences of blank spaces:")
print(v)
