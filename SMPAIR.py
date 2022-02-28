T=int(input())
for i in range(T):
    n=int(input())
    arr=[int(x) for x in input().split()]
    min1=min(arr)
    arr.remove(min1)
    min2=min(arr)
    print(min1+min2)