T=int(input())
for i in range(T):
    salary=int(input())
    gross_sal=salary
    if salary < 1500:
        gross_sal*=2.0
    elif salary >= 1500:
        gross_sal+=500
        gross_sal+=(0.98*salary)
    print(round(gross_sal,2))