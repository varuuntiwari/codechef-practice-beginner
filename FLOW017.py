def secondLargest(arr):
    arr.remove(max(arr))
    return arr[0] if arr[0]>arr[1] else arr[1]

arr=[]
n=int(input())
for i in range(n):
    arr=[int(x) for x in input().split()]
    print(secondLargest(arr))