//Problem:https://codeforces.com/contest/1742/problem/A
//Name: Sum
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  int i,n,j,k,t,count=0,sum=0,a,b,c;
  cin>>t;
  while(t-->0){
    cin>>a;cin>>b;cin>>c;
    if(a==b+c || b==a+c || c==a+b)
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }
  return 0;
}