def generate_checkerboard(n):
    for i in range(2 * n):
        row = ''
        for j in range(2 * n):
            if (i // 2 + j // 2) % 2 == 0:
                row += '#'
            else:
                row += '.'
        print(row)

# Read the number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Read the value of n for the current test case
    n = int(input())
    # Generate the checkerboard for the current test case
    generate_checkerboard(n)
