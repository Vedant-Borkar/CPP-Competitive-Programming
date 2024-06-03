//Problem:https://codeforces.com/contest/1980/problem/A
//Name:A. Problem Generator
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,sum=0;
  cin>>t;
  while(t-->0){
    int count=0;
    int m;
    int arr1[7]={0,0,0,0,0,0,0};
    cin>>n;
    cin>>m;
    string s;cin>>s;
    int a[n];
    for(i=0;i<n;i++){
      char c=s.at(i);
      arr1[c-'A']++;
    }
   for(i=0;i<7;i++){
      if(arr1[i]<m){
        count+=(m-arr1[i]);
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}
