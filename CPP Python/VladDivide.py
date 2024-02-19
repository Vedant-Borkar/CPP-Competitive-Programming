def min_groups(numbers):
  groups = 1
  for i in range(31):
    same_bit = True
    prev_bit = None
    for num in numbers:
      curr_bit = num & (1 << i)
      if prev_bit is not None and curr_bit != prev_bit:
        same_bit = False
        break
      prev_bit = curr_bit
    if not same_bit:
      groups += 1
      remaining = [num for num in numbers if (num & (1 << i)) != prev_bit]
      groups += min_groups(remaining)
      numbers = [num for num in numbers if (num & (1 << i)) == prev_bit]
  return groups

t = int(input())
for _ in range(t):
  n = int(input())
  numbers = [int(x) for x in input().split()]
  print(min_groups(numbers))
