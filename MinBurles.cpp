//Problem:
//Name:
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0,sum=0;
  cin>>t;
  while(t-->0){
    cin>>n;int a,b,cost=0;
    cin>>a;
    cin>>b;
    if(b>=2*a){
      cost=n*a;
    }else{
      cost=n/2*b+n%2*a;
    }
    cout<<cost<<"\n";
  }
  return 0;
}