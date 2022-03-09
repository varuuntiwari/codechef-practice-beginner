t=int(input())
for i in range(t):
  str=[x for x in input()]
  chars=dict()
  for c in set(str):
    chars[c]=0
  for c in str:
    chars[c]+=1
