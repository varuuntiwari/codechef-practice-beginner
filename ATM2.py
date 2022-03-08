t=int(input())
for i in range(t):
  n, k = [int(x) for x in input().split(" ")]
  draws = [int(x) for x in input().split(" ")]
  status = ""
  for draw in draws:
    if draw <= k:
      k-=draw
      status+="1"
    else:
      status+="0"
  print(status)