# cook your dish here
tt=int(input())
i=1
while i<=tt:
    a,b=list(map(int,input().split()))
    if((a+b)%2==0):
        print("Bob")
    else:
        print("Alice")
    i+=1