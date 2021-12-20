def check(a):
    s = a.count(1)
    r = a.count(0)
    if s > r :
        return "YES"
    else:
        return "NO"

 

t = int(input())
for _ in range(t):
    a = list(map(int,input().split()))
    print(check(a))