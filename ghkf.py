cname = input("Enter file name: ")
lines = 0
with open(cname, 'l') as c:
    for line in c:
        lines += 1
print("Number of lines:")
print(lines)
