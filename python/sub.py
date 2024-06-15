n = int(input("enter the num "))
arr =[]
b=[]
for i in range(n):
    arr.append(input())
# for i in range(n):
#     for j in range(n):
#         print(j, end=" ")
    # print()

for i in range(n):
    b.append([arr[i], arr[i]])
  

print(arr)
print(b)

# catalan = []
# def catalan_num(n):
#     for i in range(2,n+1):
#         for j in range(i):
#             return catalan[n]

# def count_non_crossing(n):
#     if n%2 != 0:
#         return 0
#     return catalan_num(n//2)

# n=2
# catalan_num(n)

