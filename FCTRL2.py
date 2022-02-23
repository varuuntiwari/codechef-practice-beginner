def get_fact(i):
  if i==1:
    return 1
  else:
    return i*get_fact(i-1)

t=int(input())
for i in range(t):
  x=int(input())
  print(get_fact(x))