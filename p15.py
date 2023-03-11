#write a program to replace a vowels in a given string with a given character.
s=input("Enter a string: ")
ch=input("Enter a character: ")
for i in s:
    if i in "aeiouAEIOU":
        s=s.replace(i,ch)
print(s)
