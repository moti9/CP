tt = int(input())
for test in range(tt):
    # x = int(input())
    # y = int(input())
    # p = int(input())
    # q = int(input())
    x,y,p,q=input().split()
    chef = int(x)+int(p)*10
    chefina = int(y)+int(q)*10
    # chefina = int(y+(q*10))
    if chef > chefina:
        print("Chefina")
    elif chef == chefina:
        print("Draw")
    else:
        print("Chef")
