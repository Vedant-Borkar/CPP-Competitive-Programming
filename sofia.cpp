//Problem:https://codeforces.com/contest/1980/problem/C
//Name:C. Sofia and the Lost Operations
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
    cin>>n;int a[n],b[n],m;
    for(i=0;i<n;i++)
      cin>>a[i];
    for(i=0;i<n;i++)
      cin>>b[i];
    cin>>m;int d[m];
    for(i=0;i<m;i++)
      cin>>d[i];
    for(i=0;i<n;i++){
      if(a[i]!=b[i])
        count++;
    }
    if(count>m){
      cout<<"NO\n";
    }else{
      for(i=0;i<n;i++){
      int flag=0;
      if(a[i]!=b[i])
      {
        for(j=0;j<m;j++){
          if(b[i]==d[j]){
            flag=1;
            break;
          }
        }if(flag!=1)
        {
          cout<<"NO\n";
          break;
        }
      }
     }
     cout<<"YES\n"; 
    }
  }
  return 0;
}