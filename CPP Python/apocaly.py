t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    a = list(map(int, input().strip().split()))
    year = a[0]
    max_period = a[0]
    for i in range(1, n):
        while year % a[i] != 0:
            year += max_period
        max_period = max(max_period, a[i])
    print(year)
