n=int(input())
army=[int(x) for x in input().split()]
odd,even=0,0
for soldier in army:
    if soldier%2==0:
        even+=1
    else:
        odd+=1

if odd>=even:
    print("NOT READY")
else:
    print("READY FOR BATTLE")