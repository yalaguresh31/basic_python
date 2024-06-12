def pattern_squre():
    n = int(input("Enter  the number:"))
    for i in range(1,n+1):
        for j in range(1,n+1):
            print("*",end="")
        print()

def pattern_number():
    n = int(input("Enter  the number:"))
    for  i in  range(n):
        for k in range(i):
            print(" ",end="")

        for j in range(n-i,0,-1):
            print(j,end=" ")
        print("")

def pattern_mutiple():
    n=int(input("Enter the number"))
    for i in range(0,n):
        for j in range(0,n):
            if(i==j or (i+j)==n-1):
                print("*",end="")
            else:
                print(" ",end="")
        print("")

# pattern_squre()
pattern_number()
# pattern_mutiple()
