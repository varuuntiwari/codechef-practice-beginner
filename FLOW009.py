T=int(input())
for i in range(T):
    q,p=[float(x) for x in input().split()]
    result=q*p
    if q > 1000:
        result *= 0.9
    print(result)