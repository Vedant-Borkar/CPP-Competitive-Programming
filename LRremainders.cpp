//Problem:https://codeforces.com/contest/1932/problem/C
//Name:LR-Remainders
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
long long Prod(vector<int>a){
  long long prod=1;
  for(auto i:a){
    prod*=i;
  }
  return prod;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0;
  cin>>t;
  while(t-->0){
    cin>>n;int m;
    cin>>m;vector<int> arr;
    for(i=0;i<n;i++){
      cin>>k;
      arr.push_back(k);
    }
    string s;
    cin>>s;
    vector<int> ans;i=0;
    while(arr.size()>0){
      long long b=Prod(arr)%m;
      ans.push_back(b);
      if(s.at(i)=='L'){
        arr.erase(arr.begin());
        i++;
      }else{
        arr.pop_back();
        i++;
      }
    }
    for(auto i:ans){
      cout<<i<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
