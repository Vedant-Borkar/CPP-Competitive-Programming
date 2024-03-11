//Problem:https://algochief.com/start?ques-id=1002&id=101
//Name:2nd Place
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0,sum=0;
  cin>>n;
  vector<int> arr;
  vector<int> arr1;
  for(i=0;i<n;i++){
    int a;
    cin>>a;
    arr.push_back(a);
  }
   for(i=0;i<n-1;i++){
    int a;
    cin>>a;
    arr1.push_back(a);
  }
  sort(arr.begin(),arr.end());
  i=0;
  int ans[n-1];
  while(arr.size()>=3 && i<n-1){
    if(arr1[i]==1){
      ans[i]=arr[1];
      arr.erase(arr.begin()+1);
    }else{
      ans[i]=arr[n-2];
      arr.erase(arr.begin()+(n-2));
    }
    i++;
  }
  if(arr.size()<3){
    if(arr1[i]==1){
      ans[i]=arr[1];
      arr.erase(arr.begin()+1);
    }else{
      ans[i]=arr[n-2];
      arr.erase(arr.begin()+(n-2));
    }
  }
  for(auto k : ans){
    cout<<k<<" ";
  }
  return 0;
}