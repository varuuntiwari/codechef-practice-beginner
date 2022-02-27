n=int(input())
i=0
arr=[]
while i<n:
    arr.append(int(input()))
    i+=1

for x in sorted(arr):
    print(x)