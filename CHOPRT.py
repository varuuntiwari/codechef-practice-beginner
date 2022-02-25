n=int(input())
for i in range(n):
    x,y=[int(x) for x in input().split()]
    if x>y:
        print('>')
    if x<y:
        print('<')
    if x==y:
        print('=')