
#program to delete all repeated words in a given string.
s=input("Enter a string: ")
l=s.split()
l1=[]
for i in l:
    if i not in l1:
        l1.append(i)
print(" ".join(l1))


