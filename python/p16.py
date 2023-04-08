#program to check whether a list is binary or not.
l=[]
n=(int)(input("Enter no.of elements: "))
for i in range(n):
    l.append((int)(input("Enter element: ")))
for i in l:
    if i!=0 and i!=1:
        print("Not a binary list")
        break
else:
    print("Binary list")
    