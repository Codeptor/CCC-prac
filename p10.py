#program to print armstrong numbers between 1 to 1000.
def armstrong(n):
    sum=0
    temp=n
    while temp>0:
        digit=temp%10
        sum+=digit**3
        temp//=10
    if n==sum:
        return True
    else:
        return False
for i in range(1,1001):
    if armstrong(i):
        print(i)


