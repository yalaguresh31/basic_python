# a = int(input("enter the one number:"))
# b = int(input("enter the  number:"))
# sum = -(-a-b)
# print(sum)

# mod = a//b
# if mod<0:
#     mod +=1

# m = a-b*mod
# print(m)

# div
# 13  2  6
# 14 -2 -7
# -11 2 -5

# n = int(input("enter the one number:"))
# c=t=0
# for i in range(2,n+1):
#     if(n%i == 0):
#         c = c+1
#         print(i)
# if(c==1):
#     print(i)
# else:
#     print
# for i in range(n):
#     print(arr[i])  
 

# n = int(input("Enter the size: "))
# arr = []
# temp = []
# for i in range(n):
#     arr.append(int(input("enter array elements: ")))  

# arr.sort()
# k=-1
# for j in range(0,n):
#     if k== arr[j]:
#         temp.append(k)
#     else:
#         k += 1

# print("output: ",temp)

n = int(input("Enter the size: "))
arr = []
temp = []
for i in range(n):
    arr.append(int(input("enter array elements: ")))  

arr.sort()
small = arr[0]
leargest_f = arr[n-1]

for j in range(n):
    if small < arr[j] and arr[j] < leargest_f:
        small = arr[j]
        # print(small)

print("first leargest: ",leargest_f)
print("sceond leargest: ",small)

