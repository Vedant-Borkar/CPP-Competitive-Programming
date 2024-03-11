def find_second_smallest_and_second_largest(n, arr, commands):
    sorted_arr = sorted(arr)
    result = []

    for command in commands:
        if command == 1:
            result.append(sorted_arr[1])
            sorted_arr.pop(1)
        elif command == 2:
            result.append(sorted_arr[-2])
            sorted_arr.pop(-2)

    return result

n = int(input())
arr = list(map(int, input().split()))
commands = list(map(int, input().split()))
output = find_second_smallest_and_second_largest(n, arr, commands)
print(*output)
