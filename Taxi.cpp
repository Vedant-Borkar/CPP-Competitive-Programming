//Problem:https://codeforces.com/problemset/problem/158/B
//Name:Taxi
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0;double sum=0;
  cin>>n;int arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
  }double ans=sum/4;
  cout<<ceil(ans);
  return 0;
}