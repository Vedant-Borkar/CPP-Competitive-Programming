def Solution(n,l,l1):
  ans=[]
  for i in range(n-1):
    if(l1[i]==1):
      ans.append(l[1])
      l.remove(l[1])
      print(l)
    elif(l1[i]==2):
      ans.append(l[n-3])
      l.remove(l[n-3])
      print(l)
  print(ans)

n=int(input())
l=[int(x) for x in input().split(' ')]
l1=[int(x) for x in input().split(' ')]
Solution(n,l,l1)