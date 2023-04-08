#write a program to count frequency of a given character in a string.
s=input("Enter a string: ")
ch=input("Enter a character: ")
count=0
for i in s:
    if i==ch:
        count+=1
print(count)

