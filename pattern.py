# --------------------------------
# Name:        module1
# Purpose:
#
# Author:      motik
#
# Created:     03-12-2021
# Copyright:   (c) motik 2021
# Licence:     <your licence>
# -------------------------------


# print("Hello")
#m=int(input("Enter an integer= "))
#v=int(input("Enter an integer= "))

# print(m+v)


# print a pattern   1 22 333 4444..................


# n = int(input("Enter number of row= "))

# for i in range(1, n+1):
#     for j in range(1, i+1):
#         print(i, end="")
#     print()


#             Print pattern 55555 4444 333 22 1
# n = int(input("Enter number of rows= "))

# for i in range(n, 0, -1):
#     for j in range(0, i):
#         print(i, end="")
#     print()


#                     Print a pattern
# 1
# 22
# 333
# 333
# 22
# 1

n = int(input("Enter number of rows= "))


for i in range(1, n+1):
    for j in range(1, i+1):
        print(i, end="")
    print()

for i in range(n, 0, -1):
    for j in range(0, i):
        print(i, end="")
    print()
