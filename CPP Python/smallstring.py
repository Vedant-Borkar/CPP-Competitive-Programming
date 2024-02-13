#Problem:https://codeforces.com/contest/1931/problem/A
#Name:A. Recovering a Small String
#Author:Vedant Borkar
def decode_word(n):
    word = ""
    while n > 0:
        if n > 27:
            word += "z"
            n -= 27
        else:
            if n==2:
              word+="aa"
              n=0
            else:
              n=n-3+len(word)
              word += chr(n + 96)
              while len(word)!=3:
                word+="a"  # Adding 96 to convert index to ASCII value
              n = 0
    return word[::-1]  # Reverse the word and fill missing characters with 'a'


# Input number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    n = int(input())  # Input the encoded word
    decoded_word = decode_word(n)  # Decode the word
    print(decoded_word)
