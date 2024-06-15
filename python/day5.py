# n = int(input("enter the array size: "))
# arr = []
# for i in range(n):
#     arr.append(int(input("enter the aarray elements:")))

# arr.sort()
# print("minimum number: ",arr[0])
# print("maximum number: ",arr[n-1])

# big=small=0
# for i in range(n):
#     for j in range(n):
#         c=1
#         if(arr[i] < arr[c]):
#             small=arr[i]
#         else:
#             big = arr[c]
# print("minimum number: ",small)
# print("maximum number: ",big)

# problem 2
# res =1
# n = int(input("enter the number: "))
# if 0<n:
#   for i in range(1,n+1):
#       res *= i
#   print(res)
# else:
#   print("invalid input")

# problem 3
# def fibonacci(n):
#     if n == 1 or n == 2:
#         return 1
#     else:
#         return fibonacci(n-1) + fibonacci(n-2)
    
# n = int(input("enter the number: "))
# res = fibonacci(n)
# print(res%100)

# a,b=0,1
# if n == 1:
#     b=0
# elif n == 2:
#     b=1
# else:
#     for i in range(2,n+1):
#         a,b=b,(a +b)%100

# print("output ",b)

#problem 4
# import math
# x = int(input("enter the number: "))
# r = math.sqrt(x)
# s = int(r)
# if r == s:
#     print(int(r))
# else:
#     print(s)
res=0
n = int(input("enter the number: "))
# res=n*(n-1)//2
# res = (1//(n+1))(2*n//n)

print(res)