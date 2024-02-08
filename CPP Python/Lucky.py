#Problem:https://codeforces.com/problemset/problem/122/A
#Name:Lucky Division
#Author:Vedant Borkar
def lucky(n):
  list1=['1','2','3','5','6','8','9','0']
  for j in n:
    for i in list1:
      if(j==i):
        return
  print("YES")
  exit(0)
def almostlucky(n):
  n=int(n)
  if(n%4==0 or n%7==0 or n%47==0 or n%74==0 or n%477==0 or n%447==0 or n%444==0 or n%777==0 or n%474==0):
    print("YES")
  else:
    print("NO")
n=input()
lucky(n)
almostlucky(n)