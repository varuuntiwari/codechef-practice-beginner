T=int(input())
for i in range(T):
    N=input()
    if(N=="B" or N=="b"):
        print("BattleShip")
    elif(N=="C" or N=="c"):
        print("Cruiser")
    elif(N=="D" or N=="d"):
        print("Destroyer")
    elif(N=="F" or N=="f"):
        print("Frigate")