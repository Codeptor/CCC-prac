#program to delete duplicates in a given string.
s=input("Enter a string: ")
l=[]
for i in s:
    if i not in l:
        l.append(i)
print("".join(l))
