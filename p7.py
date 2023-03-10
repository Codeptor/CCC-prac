#PRINT THE BELOW MENTIONED PATTERN FOR ANY "N" VALUE. WHERE "N" INDICATES NO.OF ROWS.
#     1
#    1 2
#   1 2 3
#  1 2 3 4
n=(int)(input("Enter a number: "))
for i in range(1,n+1):
    for j in range(1,n-i+1):
        print(" ",end="")
    for j in range(1,i+1):
        print(j,end="")
    print()
