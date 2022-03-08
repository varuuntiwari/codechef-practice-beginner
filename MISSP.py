t=int(input())
if t in range(1, 11):
  for i in range(t):
    count = 0
    n=int(input())
    if n in range(1, 100001):
      for x in range(n):
        dolls=int(input())
        if dolls in range(0, 100001):
          if dolls%2 != 0:
            count+=1
    print(count)