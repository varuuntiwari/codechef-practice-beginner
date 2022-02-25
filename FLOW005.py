def getSmallestNote(x):
    for i in [100,50,10,5,2,1]:
        if i <= x:
            return i

n=int(input())
for i in range(n):
    amount=int(input())
    cp=amount
    count=0
    while cp:
        note=getSmallestNote(cp)
        cp=cp-note
        count+=1
    print(count)