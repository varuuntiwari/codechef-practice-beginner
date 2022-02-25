def getSmall(x):
    for i in range(11,-1,-1):
        if 2**i <= x:
            return i

n=int(input())
for i in range(n):
    x=int(input())
    x1=x
    count=0
    while x1:
        z=getSmall(x1)
        x1=x1-(2**z)
        count+=1
    print(count)