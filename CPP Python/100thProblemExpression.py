#Problem:https://codeforces.com/problemset/problem/479/A
#Name:Expression
#Author:Vedant Borkar
# 100th PROBLEM ON CFFFF
def exp(a,b,c):
  x=[0,0,0,0,0,0]
  x[0]=a+b+c
  x[1]=a*b*c
  x[2]=(a+b)*c
  x[3]=(a*b)+c
  x[4]=(a+(b*c))
  x[5]=(a*(b+c))
  ans=max(x)
  print(ans)
a=int(input())
b=int(input())
c=int(input())
exp(a,b,c)