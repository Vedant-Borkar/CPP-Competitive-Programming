#Problem:
#Name:
#Author:Vedant Borkar
from math import gcd
def coprime(n,max):
  l=[int(x) for x in input().split()]
  for i in range(n):
    for j in range(n):
      if(gcd(l[i],l[j])==1):
        if((i+j)>max):
          max=i+j
  print(max+2)  
t=int(input())
while(t>0):
  coprime(int(input()),-1)
  t-=1