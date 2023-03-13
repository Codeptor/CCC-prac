#program to conver Decimal to Binary Numbers 
def dec_to_bin(n):
    if n>1:
        dec_to_bin(n//2)
    print(n%2,end="")
n=(int)(input("Enter a number: "))
dec_to_bin(n)
print()
