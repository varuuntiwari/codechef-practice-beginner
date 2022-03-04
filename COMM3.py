from math import pow, sqrt

def getDist(x, y):
  a = pow((x[0] - y[0]), 2)
  b = pow((x[1] - y[1]), 2)
  res = sqrt(a+b)
  return res

t=int(input())
while t > 0:
  t-=1
  r = float(input())
  chef = [int(x) for x in input().split(' ')]
  head = [int(x) for x in input().split(' ')]
  sous = [int(x) for x in input().split(' ')]
  dists = [getDist(chef, head), getDist(chef, sous), getDist(sous, head)]
  if len([x for x in dists if (x > r)]) > 1:
    print("no")
  else:
    print("yes")