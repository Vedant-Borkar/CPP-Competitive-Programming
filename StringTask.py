def process_string(input_str):
    vowels = {'A', 'O', 'E', 'U', 'I', 'a', 'o', 'e', 'u', 'i','Y','y'}
    result = ''
    for char in input_str:
        if char in vowels:
            continue
        else:
            result += '.' + char.lower()
    return result
input_str = input().strip()
result_str = process_string(input_str)
print(result_str)