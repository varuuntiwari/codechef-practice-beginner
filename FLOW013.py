n=int(input())
for i in range(n):
    a,b,c=[int(x) for x in input().split()]
    sum=a+b+c
    if sum==180:
        print("YES")
    else:
        print("NO")