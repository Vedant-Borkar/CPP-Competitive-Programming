t = int(input())
for _ in range(t):
    n = int(input())
    grid = [list(input()) for _ in range(n)]
    ones = [(i, j) for i in range(n) for j in range(n) if grid[i][j] == '1']
    min_i, min_j = min(ones)
    max_i, max_j = max(ones)
    if max_i - min_i == max_j - min_j:
        print("SQUARE")
    else:
        print("TRIANGLE")
