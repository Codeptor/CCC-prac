#program to find largest and smallest string in a list.
l=[]
n=(int)(input("Enter no.of strings: "))
for i in range(n):
    l.append(input("Enter string: "))
max=l[0]
min=l[0]
for i in l:
    if len(i)>len(max):
        max=i
    if len(i)<len(min):
        min=i
print("Largest string is: ",max)
print("Smallest string is: ",min)
