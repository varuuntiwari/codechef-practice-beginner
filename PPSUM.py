def getSum(n):
    return (n*(n+1))/2
T=int(input())
for i in range(T):
    D,N=[int(x) for x in input().split()]
    temp=getSum(N)
    D-=1
    while D > 0:
        temp1=temp
        temp=getSum(temp1)
        D-=1
    print(int(temp))
