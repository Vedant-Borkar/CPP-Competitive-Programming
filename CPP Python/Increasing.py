#Problem:
#Name:
#Author:Vedant Borkar
def inc(n,count):
  l=[int(x) for x in input().split()]
  l.sort()
  for i in range(len(l)-1):
    if(l[i+1]==l[i]):
      count+=1
      break
  if(count>0): print("NO")
  else: print("YES")
t=int(input())
while(t>0):
  inc(int(input()),0)
  t-=1