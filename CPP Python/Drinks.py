#Problem:https://codeforces.com/problemset/problem/200/B
#Name:Drinks
#Author:Vedant Borkar
def drinks(n):
  list1=[int(x) for x in input().split()]
  sum1=sum(list1)/(100*n)
  print(sum1*100)
n=int(input())
drinks(n)