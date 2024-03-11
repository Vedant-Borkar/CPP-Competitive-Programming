#Problem:
#Name:
#Author:Vedant Borkar
def Soln(nums,n):
  nums1=sorted(nums)
  count=0
  for i in range(n):
    if(nums[i]!=nums1[i]):
      count+=1
  print(count)
n=int(input())
l=[int(x) for x in input().split(' ')]
Soln(l,n)