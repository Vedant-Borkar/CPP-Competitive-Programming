#Problem:https://codeforces.com/problemset/problem/131/A
#Name:A. cAPS lOCK
#Author:Vedant Borkar
def Solution(s):
  str=s.split(" ")
  s1=[]
  count=0
  for i in range(len(str)):
    word=str[i]
    if(word[0].islower()):
        if(word[1].isupper()):
          count+=1
          s1.append(word.lower())
          s=s1[i]
          s=s.lower()
          s=s[0].upper()+s[1:]
          s1[i]=s
    elif count>0:
       s1.append(word.lower())    
    else:
       s1.append(word)      
  ans=""
  for i in s1:
     ans+=i+" "
  print(ans.strip())
Solution(input())