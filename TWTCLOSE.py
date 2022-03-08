tweets, clicks = [int(x) for x in input().split(" ")]
tweets_status = set()
count = 0

for i in range(clicks):
  click = [x for x in input().split(" ")]
  if click[0] == "CLICK":
    if click[1] not in tweets_status:
      tweets_status.add(click[1])
      count = count + 1
    else:
      tweets_status.remove(click[1])
      count = count - 1
  else:
    count = 0
    tweets_status.clear()
  
  print(count)