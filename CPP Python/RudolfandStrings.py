#Problem:https://codeforces.com/contest/1941/problem/C
#Name:C. Rudolf and the Ugly String
#Author:Vedant Borkar
def min_chars_to_delete(t, test_cases):
    result = []
    for i in range(t):
        n = int(test_cases[i][0])
        s = test_cases[i][1]

        pie_count = s.count("pie")
        map_count = s.count("map")
        mapie_count=s.count("mapie")
        result.append(pie_count+map_count-mapie_count)

    return result

# Accepting user input
t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    s = input()
    test_cases.append((n, s))
# Function call
output = min_chars_to_delete(t, test_cases)

# Print output
for res in output:
    print(res)

