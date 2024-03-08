#Problem:https://codeforces.com/problemset/problem/131/A
#Name:A. cAPS lOCK
#Author:Vedant Borkar
def Solution(s):
  str=s.split(" ")
  for word in str:
    if(word[0].islower()):
        word1=word.lower()
        word=word1
  s1=""
  for word in str:
    s1+=word+" "
  print(s1)

Solution(input())