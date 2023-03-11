#program to count number of vowels in a given string.

s=input("Enter a string: ")
count=0
for i in s:
    if i in "aeiouAEIOU":
        count+=1
print(count)
