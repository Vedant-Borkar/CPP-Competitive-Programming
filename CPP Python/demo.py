def maxConsecutiveElements(nums):
    from collections import Counter
    count = Counter(nums)
    nums = sorted(count)
    max_length = 0
    for i in range(len(nums)):
        length = min(count[nums[i]], count.get(nums[i] - 1, 0))
        j = i - 2
        while j >= 0 and nums[i] - nums[j] == 2:
            length += min(count[nums[j]], count[nums[j + 1]])
            j -= 1
        if j >= 0 and nums[i] - nums[j] == 1:
            length += count[nums[j]]
        max_length = max(max_length, length)
    return max_length

print(maxConsecutiveElements([2,1,5,1,1]))  # Output: 3
print(maxConsecutiveElements([1,4,7,10]))  # Output: 1
