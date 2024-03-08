#Problem:https://codeforces.com/problemset/problem/131/A
#Name:A. cAPS lOCK
#Author:Vedant Borkar
def Solution(s):
  str=s.split(" ")
  s=[]
  for word in str:
    if(word[0].islower()):
        s.append(word.lower())
        
  # s1=""
  # for word in str:
  #   s1+=word+" "
  # print(s1)

Solution(input())