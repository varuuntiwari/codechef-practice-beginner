def get_fact(i):
  res=1
  for i in range(2,i+1):
    res*=i
  return res
    
t=int(input())
for i in range(t):
  x=int(input())
  print(get_fact(x))