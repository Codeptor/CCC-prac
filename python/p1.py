#character pattern
x=65 #ASCII value of A
n=4 #number of rows
for i in range(1,n+1):
    for j in range(1,i+1):
        print(chr(x),end=" ")
    x=x+1
    print()