//Problem:https://codeforces.com/problemset/problem/1030/A
//Name:A. In Search of an Easy Problem
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0,sum=0;cin>>t;
  for(i=0;i<t;i++){
    cin>>n;if(n==1){
        count++;
    }
  } if(count>0)
      cout<<"HARD";
    else
      cout<<"EASY";
  return 0;
}