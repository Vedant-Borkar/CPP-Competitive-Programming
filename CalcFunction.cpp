//Problem:https://codeforces.com/problemset/problem/486/A
//Name:A. Calculating Function
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long i,j,k,t=0,sum=0;
  long long n,f=0;
  cin>>n;
  if(n%2==0){
    f=n/2;
  }else{
    f=((n-1)/2-n);
  }
  cout<<f;
  return 0;
}