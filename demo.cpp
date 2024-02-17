//Problem:
//Name:
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
 int maxOperations(vector<int>& nums) {
        int n=nums.size();int count=0,sum,cost;
        for(int i=0;i<nums.size()-1;){
            cost=nums[i]+nums[i+1];
            if(n>=2 && count==0){
                count++;
                n=n-2;
                i+=2;
            }
            else if(n>=2){
                sum=nums[i]+nums[i+1];
                if(cost==sum){
                    n-=2;count++;
                    i+=2;
                }else{
                    break;
                }
            }else{
                break;
            }
        }
        return count;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0,sum=0,arr[n];
  vector<int> nums={3,2,1,4,5};
  vector<int> nums1={3,2,1,4,5};
  k=maxOperations(nums);
  cout<<k;
  return 0;
}