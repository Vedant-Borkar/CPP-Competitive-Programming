#Problem:https://codeforces.com/problemset/problem/230/A
#Name:Dragons
#Author:Vedant Borkar
def dragon(s,n):
  list1,list2=[],[]
  d,d1={},{}
  count=0
  for i in range(n):
    l=[int(x) for x in input().split(' ')]
    list1.append(l[0])
    list2.append(l[1])
  d=dict(zip(list1,list2))
  d1=dict(sorted(d.items()))
  for key,value in d1.items():
    if(s>key):
      s=s+value
    else:
      count=1
      break
  if(count==1):
    print("N0")
  else:
    print("YES")
l=[int(x) for x in input().split(' ')]
dragon(l[0],l[1])