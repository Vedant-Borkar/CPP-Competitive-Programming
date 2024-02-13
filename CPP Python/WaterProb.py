#Problem:https://codeforces.com/contest/1931/problem/B
#Name:B. Make Equal
#Author:Vedant Borkar
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    total = sum(a)
    if total % n != 0:
        print("NO1")
        return
    target = total // len(a)
    if(a[0]<target):
      print("NO2")
      return
    else: 
      for i in range(n-1):
        s = 0
        if(a[i]<target):
           print("NO3")
           print(i)
           return
        elif(a[i]==target):
           continue
        else:
          s=a[i]-target
          a[i]=target
          for j in range(i+1,n,1):
            if(a[j]<target):
              while(a[j]!=target and s!=0):
                a[j]+=1
                s-=1
      print("YES")
t = int(input())
for _ in range(t):
    solve()