l = int(input())
b = int(input())

area = l*b
peri = 2*(l+b)

if area > peri:
  print(f"Area\n{area}")
elif peri == area:
  print(f"Eq\n{peri}")
else:
  print(f"Peri\n{peri}")