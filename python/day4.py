# problem 1
# def withoutfor(n):
#     if n == 0:
#         return 0
#     else:
#         withoutfor(n-1)
#         print(n)

# n = int(input("Enter the size: "))
# withoutfor(n)

# problem 2
# n = int(input("Enter the size: "))
# arr = []
# for i in range(n):
#     arr.append(int(input("enter array elements: ")))

# x = int(input("Enter the x value: "))

# for i in range(0,n):
#     if x==arr[i]:
#         print("index: ",i+1)
#         exit(0)

# print("x is not find")

# problem 3
# n = int(input("Enter the size: "))
# arr = []
# for i in range(n):
#     arr.append(int(input("enter array elements: ")))

# for i in range(0,n) :
#     for j in range(i+1,n):
#         for k in range(j+1,n):
#             c =arr[i]+arr[j]+arr[k]
#             if c == 0:
#                 print("1")
#             else:
#                 print("0")

# n = int(input("Enter the size: "))
# temp = []
# arr = []
# for i in range(n):
#     arr.append(int(input("enter array elements: ")))
#     temp.append(i)

# print(arr)
# print(temp)

# m = len(arr)//2
# print(arr[m])


n = int(input("Enter the size: "))
uint = int(input("Enter the uint: "))
r = int(input("Enter the r: "))
arr = []
for i in range(n):
    arr.append(int(input("enter array elements: ")))

