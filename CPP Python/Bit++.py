#Problem:https://codeforces.com/problemset/problem/282/A
#Name:Bit++
#Author:Vedant Borkar
def bit(n):
  l,x=[],0
  for i in range(n):
    l.append((input()))
  for i in l:
    if(i[0]=='+'):
      x+=1
    elif(i[0]=='-'):
      x-=1
    elif(i[0]=='X'):
      if(i[1]=='-'):
        x-=1
      if(i[1]=='+'):
       x+=1
  print(x)
bit(int(input()))