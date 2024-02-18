def max_coins(n, path):
    coins = 0
    i = 0

    while i < n:
        if path[i] == '@':
            coins += 1

        if i < n - 1 and path[i + 1] == '*':
            i += 1

        i += 1

    return coins

# Input
t = int(input())
for _ in range(t):
    n = int(input())
    path = input().strip()
    print(max_coins(n, path))
