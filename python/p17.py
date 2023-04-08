#program to count number of digits in a a factorial of a given number.
n=(int)(input("Enter a number: "))
count=0
while n>0:
    count+=1
    n=n//10
print(count)

#program to find factorial of a given number.
n=(int)(input("Enter a number: "))
fact=1
for i in range(1,n+1):
    fact*=i
print(fact)
