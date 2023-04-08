#program to convert string to integer.
s=input("Enter a string: ")
n=0
for i in s:
    n=n*10+(ord(i)-48)
print(n)