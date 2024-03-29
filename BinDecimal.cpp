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
    cin>>n;int temp=n,k=n%100;
    count=0;
    if(n%10==1 || n%10==0){
      while(n>0){
        j=n%10;
        n=n/10;
        if(j!=1 || j!=0 || j!=k)
          count--;
      }
      if(j==1 && count==0)
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
  }
  return 0;
}