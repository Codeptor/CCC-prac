#program to generate random numbers and store them in a list.
import random
l=[]
n=(int)(input("Enter no.of elements: "))
for i in range(n):
    l.append(random.randint(1,1000))
print(l)
