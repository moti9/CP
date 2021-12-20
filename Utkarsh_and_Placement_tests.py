import sys
input=sys.stdin.readline

tt = int(input())

for i in range(tt):
    a, b, c = input().split()
    x, y = input().split()

    if a == x:
        print(a)
    elif a == y:
        print(a)
    elif b == x:
        print(b)
    elif b == y:
        print(b)
    elif c == x:
        print(c)
    elif c == y:
        print(c)
